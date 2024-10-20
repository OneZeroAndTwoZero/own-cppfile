#include<bits/stdc++.h>
using namespace std;

struct th{
	int w,v;
};

int m,n,now,ans;
th a[105];

bool cmp(th k,th  b){
	return k.v > b.v;
}

int main(){
	scanf("%d %d",&m,&n);
	for(int i = 0;i < n;i++){
		scanf("%d %d",&a[i].w,&a[i].v);
	}
	sort(a,a + n,cmp);
	now = 0;
	ans = 0;
	for(int i = 0;i < n;i++){
		if(now + a[i].w >= m){
			ans += (m - now) * a[i].v;
			break;
		}
		now += a[i].w;
		ans += a[i].w * a[i].v;
	}
	printf("%d\n",ans);

	return 0;
}

