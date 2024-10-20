#include<bits/stdc++.h>
using namespace std;

int l,n,m,ans;
int a[100005] = {0};

bool check(int x){
	int cnt = 0,need;
	for(int i = 0;i <= n + 1;i ++){
		int need = a[i] + x;
		while(a[++ i] < need && i <= n + 1){
			cnt ++;
		}
		i --;
	}
	return cnt <= m;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

	scanf("%d %d %d",&l,&n,&m);
	for(int i = 1;i <= n;i ++){
		scanf("%d",&a[i]);
	}
	a[n + 1] = l;
	int le = 1,ri = 1000000000;
	while(le <= ri){
		int mid = (le + ri) >> 1;
		if(check(mid)){
			ans = mid;
			le = mid + 1;
		}else{
			ri = mid - 1;
		}
	}
	printf("%d\n",ans);

	return 0;
}