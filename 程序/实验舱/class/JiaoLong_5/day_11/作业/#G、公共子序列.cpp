#include<bits/stdc++.h>
using namespace std;

string a,b;
int dp[205][205] = {0};

int main(){
	while(cin >> a >> b){
		for(int i = 1;i <= a.size();i ++){
			for(int j = 1;j <= b.size();j ++){
				if(a[i - 1] == b[j - 1]){
					dp[i][j] = dp[i - 1][j - 1] + 1;
				}else{
					dp[i][j] = max(dp[i - 1][j],dp[i][j - 1]);
				}
			}
		}
		printf("%d\n",dp[a.size()][b.size()]);
		memset(dp,0,sizeof(dp));
	}

	return 0;
}

