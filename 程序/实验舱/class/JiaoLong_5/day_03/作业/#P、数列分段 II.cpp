#include<bits/stdc++.h>
using namespace std;

int n,m,ans = -1,l = 1,r = 2 * 1e9;
int a[200005] = {0};

bool check(int x){
	int now = 0,c = 0;
	for(int i = 0;i < n;i++){
		now += a[i];
		if(i < n - 1 && now + a[i + 1] > x){
			c ++;
			now = 0;
		}
	}
	c ++;
	return c <= m;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("D:\\code\\data.in","r",stdin);
    freopen("D:\\code\\data.out","w",stdout);
#endif

	scanf("%d %d",&n,&m);
	for(int i = 0;i < n;i++){
		scanf("%d",&a[i]);
	}
	while(l <= r){
		int mid = (l + r) >> 1;
		if(check(mid)){
			ans = mid;
			r = mid - 1;
		}else{
			l = mid + 1;
		}
	}
	printf("%lld\n",ans);

	return 0;
}

