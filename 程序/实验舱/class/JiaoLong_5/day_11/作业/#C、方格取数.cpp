#include<bits/stdc++.h>
using namespace std;

int n,m,s;
int a[2005][2005];
long long dp[2005][2005];

int main(){
	scanf("%d %d %d",&n,&m,&s);
	for(int i = 1; i <= n; i++){
    	for(int j = 1; j <= m; j++){
    		s = (s * 345) % 19997;
    		a[i][j] = s  + 1;
    		cout << a[i][j] << " ";
    	}
    	puts("");
	}
	for(int i = 1;i <= n;i++){
		for(int j = 1;j <= m;j ++){
  			if(a[i][j] > a[i - 1][j]) dp[i][j] = max(dp[i][j],dp[i - 1][j]);
  			if(a[i][j] > a[i][j - 1]) dp[i][j] = max(dp[i][j],dp[i][j - 1]);
  			if(a[i][j] > a[i + 1][j]) dp[i][j] = max(dp[i][j],dp[i + 1][j]);
  			if(a[i][j] > a[i][j + 1]) dp[i][j] = max(dp[i][j],dp[i][j + 1]);
  			dp[i][j] += a[i][j];
		}
	}
	printf("%lld\n",dp[n][m]);

	return 0;
}

