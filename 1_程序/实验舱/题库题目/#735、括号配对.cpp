#include<bits/stdc++.h>
using namespace std;

string s;
int n,dp[105][105] = {0};

int main(){
	cin >> s;
	n = s.size();
	for(int len = 1;len <= n;len ++){
		for(int l = 0;l + len - 1 < n;l ++){
			int r = l + len - 1;
			if(s[l] == '(' && s[r] == ')' || s[l] == '[' && s[r] == ']'){
				dp[l][r] = max(dp[l][r],dp[l - 1][r + 1] + 2);
				for(int k = l;k < r;k ++){
					dp[l][r] = max(dp[l][r],dp[l][k] + dp[k + 1][r]);
				}
			}
			dp[l][r] = max({dp[l][r],dp[l + 1][r],dp[l][r - 1]});
		}
	}
	cout << s.size() - dp[0][n - 1] << endl;

	return 0;
}

