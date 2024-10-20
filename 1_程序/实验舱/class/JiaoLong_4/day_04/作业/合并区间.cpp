#include<bits/stdc++.h>
using namespace std;

struct q{
	int s,e;
};

int n;
int pos = 0,ds,de;
q a[100005];
q ans[100005];

bool cmp(q k,q b){
	return k.s < b.s;
}

int main(){
	scanf("%d",&n);
	for(int i = 0;i < n;i++){
		scanf("%d %d",&a[i].s,&a[i].e);
	}
	sort(a,a + n,cmp);
	ds = a[0].s,de = a[0].e;
	for(int i = 1;i < n;i++){
		if(a[i].s <= de){
			de = max(de,a[i].e);
		}else{
			ans[pos].s = ds;
			ans[pos++].e = de;
			ds = a[i].s,de = a[i].e;
		}
	}
	ans[pos].s = ds;
	ans[pos++].e = de;
	for(int i = 0;i < pos;i++){
		printf("%d %d\n",ans[i].s,ans[i].e);
	}

	return 0;
}

