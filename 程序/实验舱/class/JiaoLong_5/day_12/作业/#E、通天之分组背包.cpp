#include<bits/stdc++.h>
using namespace std;

int v,n,t,tem1,tem2,p;
int dp[1005] = {0};
vector<int> w[105],c[105];

int main(){
	scanf("%d %d",&v,&n);
	for(int i = 1;i <= n;i ++){
		scanf("%d %d %d",&tem1,&tem2,&p);
		t = max(t,p);
		w[p].push_back(tem1);
		c[p].push_back(tem2);
	}
	for(int i = 1;i <= t;i ++){
		for(int j = v;j >= 0;j --){
			for(int k = 0;k < w[i].size();k ++){
				if(j >= w[i][k]){
					dp[j] = max(dp[j],dp[j - w[i][k]] + c[i][k]);
				}
			}
		}
	}
	printf("%d\n",dp[v]);

	return 0;
}

