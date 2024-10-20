#include<bits/stdc++.h>
using namespace std;

int n,m;
long long ans = -0x3f3f3f3f3f3f3f3f;
int a[105][105] = {0};
long long sum[105][105] = {0};
long long dp[105];

long long cz(int x,int y,int k){
	memset(dp,0,sizeof(dp));
	long long cnt = -0x3f3f3f3f3f3f3f3f;
	for(int i = 1;i <= m;i ++){
		long long t;
		if(y >= x){
			t = sum[y][(i + k - 1) % m] - sum[x - 1][(i + k - 1) % m];
		}else{
			t = sum[y][(i + k - 1) % m] + sum[n][(i + k - 1) % m] - sum[x - 1][(i + k - 1) % m];
		}
		dp[i] = max(dp[i - 1],0LL) + t;
		cnt = max(cnt,dp[i]);
	}
	return cnt;
}

int main(){
	scanf("%d %d",&n,&m);
	for(int i = 1;i <= n;i ++){
		for(int j = 0;j < m;j ++){
			scanf("%d",&a[i][j]);
			sum[i][j] = sum[i - 1][j] + a[i][j];
		}
	}
	for(int i = 1;i <= n;i ++){
		for(int j = 0;j <= n;j ++){
			for(int k = 0;k < m;k ++){
				ans = max(ans,cz(i,j,k));
			}
		}
	}
	printf("%lld\n",ans);

	return 0;
}

