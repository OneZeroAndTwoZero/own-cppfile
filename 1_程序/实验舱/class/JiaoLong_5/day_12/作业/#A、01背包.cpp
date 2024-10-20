#include<bits/stdc++.h>
using namespace std;

int m,n;
int w[1005],c[1005],dp[1005];

int main(){
	scanf("%d %d",&m,&n);
	for(int i = 1;i <= n;i++){
		scanf("%d %d",&w[i],&c[i]);
	}
	for(int i = 1;i <= n;i ++){
		for(int j = m;j >= w[i];j --){
			dp[j] = max(dp[j],dp[j - w[i]] + c[i]);
		}
	}
	printf("%d\n",dp[m]);

	return 0;
}

