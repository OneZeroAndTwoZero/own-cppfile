#include<bits/stdc++.h>
using namespace std;

int n,k,a,b;
long long ans = 0x3f3f3f3f3f3f3f3f;

void dfs(int now,long long sum){
	if(now == 1){
		ans = min(ans,sum);
		return;
	}
	if(sum >= ans) return;
	if(now / k * k == now){
		dfs(now / k,sum + b);
	}
	int num = now - (now / k * k);
	dfs(now - 1,sum + a);
}

int main(){
// #ifndef ONLINE_JUDGE
//     freopen("data.in","r",stdin);
//     freopen("data.out","w",stdout);
// #endif

	scanf("%d %d %d %d",&n,&k,&a,&b);
	if(k == 1){
		printf("%lld\n",(long long)(n - 1) * a);
		return 0;
	}
	dfs(n,0);
	printf("%lld\n",ans);

	return 0;
}