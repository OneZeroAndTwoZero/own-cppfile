#include<bits/stdc++.h>
using namespace std;

int N;
string s;
long long dp[105][2];

int main(){
#ifndef ONLINE_JUDGE
	freopen("../data.in", "r", stdin);
	freopen("../data.out", "w", stdout);
#endif
	
	cin >> N;
	dp[0][0] = dp[0][1] = 1;
	for (int i = 1; i <= N; i ++){
		cin >> s;
		if (s == "and"){
			dp[i][0] = 2LL * dp[i - 1][0] + dp[i - 1][1];
			dp[i][1] = dp[i - 1][1];
		}else{
			dp[i][0] = dp[i - 1][0];
			dp[i][1] = dp[i - 1][0] + 2LL * dp[i - 1][1];
		}
	}
	cout << dp[N][1] << "\n";

	return 0;
}
