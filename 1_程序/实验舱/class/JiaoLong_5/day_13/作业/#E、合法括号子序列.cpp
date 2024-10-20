#include<bits/stdc++.h>
using namespace std;

string s;
int n,dp[105][105] = {0};

int cz(int l,int r){
	if(l >= r) return 0;
	if(dp[l][r] != -1) return dp[l][r];
	if(s[l] == '(' && s[r] == ')' || s[l] == '[' && s[r] == ']'){
		dp[l][r] = max(dp[l][r],cz(l + 1,r - 1) + 2);
		for(int k = l;k < r;k ++){
			dp[l][r] = max(dp[l][r],cz(l,k) + cz(k + 1,r));
		}
	}
	dp[l][r] = max({dp[l][r],cz(l + 1,r),cz(l,r - 1)});
	return dp[l][r];
}

int main(){
	while(cin >> s){
		n = s.size();
		for(int i = 0;i < 105;i ++){
			for(int j = 0;j < 105;j ++){
				dp[i][j] = -1;
			}
		}
		cout << cz(0,n - 1) << endl;
	}

	return 0;
}

