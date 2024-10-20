#include<bits/stdc++.h>
using namespace std;

struct zhan{
	int wi,di;
	bool operator <(const zhan &p)const{
		return wi < p.wi;
	}
};

int n,p,l,z,now,ans;
zhan t[500005];
priority_queue<zhan> a;

bool cmp(zhan k,zhan b){
	return k.di < b.di;
}

int main(){
	scanf("%d",&n);
	for(int i = 0;i < n;i++){
		scanf("%d %d",&t[i].di,&t[i].wi);
	}
	scanf("%d %d",&p,&l);
	for(int i = 0;i < n;i++){
		t[i].di = p - t[i].di;
	}
	sort(t,t + n,cmp);
	z = 0,now = 0,ans = 0;
	a.push({l,0});
	l = 0;
	while(z + l < p && a.size() != 0){
		zhan y = a.top();
		a.pop();
		l -= y.di - z;
		z = y.di;
		l += y.wi;
		ans ++;
		while(now < n && t[now].di <= z + l){
			a.push(t[now ++]);
		}
	}
	if(z + l < p){
		printf("-1\n");
	}else{
		printf("%d\n",ans - 1);
	}

	return 0;
}

