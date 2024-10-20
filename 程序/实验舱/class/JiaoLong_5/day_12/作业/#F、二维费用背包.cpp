#include<bits/stdc++.h>
using namespace std;

int m,n,x;
int v[1005],w[1005],c[1005],dp[1005][1005];

int main(){
	scanf("%d %d %d",&n,&x,&m);
	for(int i = 1;i <= n;i++){
		scanf("%d %d %d",&v[i],&w[i],&c[i]);
	}
	for(int i = 1;i <= n;i ++){
		for(int j = m;j >= w[i];j --){
			for(int k = x;k >= v[i];k --)
			dp[j][k] = max(dp[j][k],dp[j - w[i]][k - v[i]] + c[i]);
		}
	}
	printf("%d\n",dp[m][x]);

	return 0;
}

