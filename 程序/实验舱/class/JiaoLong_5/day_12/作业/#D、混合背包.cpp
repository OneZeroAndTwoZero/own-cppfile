#include<bits/stdc++.h>
using namespace std;

int m,n;
int w[105],c[105],p[105],dp[105];

int main(){
	scanf("%d %d",&m,&n);
	for(int i = 1;i <= n;i ++){
		scanf("%d %d %d",&w[i],&c[i],&p[i]);
	}
	for(int i = 1;i <= n;i ++){
		if(p[i]){
			for(int j = m;j >= 0;j --){
				for(int k = 0;k <= p[i];k ++){
					if(j >= k * w[i]){
						dp[j] = max(dp[j],dp[j - k * w[i]] + k * c[i]);
					}
				}
			}
		}else{
			for(int j = w[i];j <= m;j ++){
				dp[j] = max(dp[j],dp[j - w[i]] + c[i]);
			}
		}
	}
	printf("%d\n",dp[m]);

	return 0;
}

