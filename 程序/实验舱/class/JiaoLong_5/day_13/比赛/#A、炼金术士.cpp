#include<bits/stdc++.h>
using namespace std;

int n,a,b;
int dp[1005][1005] = {0};
int x[1005] = {0},y[1005] = {0},w[1005] = {0};

int main(){
	memset(dp,0x3f3f3f3f,sizeof(dp));
	dp[0][0] = 0;
	scanf("%d %d %d",&n,&a,&b);
	for(int i = 0;i < n;i ++){
		scanf("%d %d %d",&x[i],&y[i],&w[i]);
	}
	for(int i = 0;i < n;i ++){
		for(int j = a;j >= x[i];j --){
			for(int k = b;k >= y[i];k --){
				dp[j][k] = min(dp[j][k],dp[j - x[i]][k - y[i]] + w[i]);
			}			
		}
	}
	printf("%d\n",dp[a][b]);

	return 0;
}

