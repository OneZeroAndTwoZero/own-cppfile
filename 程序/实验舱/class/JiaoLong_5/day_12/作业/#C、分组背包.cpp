#include<bits/stdc++.h>
using namespace std;

int v,n,t,tem1,tem2,p;
int dp[205] = {0};
vector<int> w[15],c[15];

int main(){
	scanf("%d %d %d",&v,&n,&t);
	for(int i = 1;i <= n;i ++){
		scanf("%d %d %d",&tem1,&tem2,&p);
		w[p].push_back(tem1);
		c[p].push_back(tem2);
	}
	for(int i = 1;i <= t;i ++){
		for(int j = v;j >= 0;j --){
			for(int k = 0;k < w[i].size();k ++){
				if(j >= w[i][k]){
					//cout << i << " " << j << ";;;" << k << endl;
					dp[j] = max(dp[j],dp[j - w[i][k]] + c[i][k]);
				}
			}
		}
	}
	printf("%d\n",dp[v]);

	return 0;
}

