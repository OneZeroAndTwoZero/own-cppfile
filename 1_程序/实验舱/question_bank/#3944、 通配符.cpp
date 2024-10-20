#include<bits/stdc++.h>
using namespace std;

string S, P;
bool dp[5005][5005];
bool sum[5005][5005];

int main(){
#ifndef ONLINE_JUDGE
	freopen("../data.in", "r", stdin);
	freopen("../data.out", "w", stdout);
#endif
	
	getline(cin, S);
	getline(cin, P);
	S = "0" + S, P = "0" + P;
	int N = S.size() - 1, M = P.size() - 1;
	dp[0][0] = sum[0][0] = 1;
	for (int i = 0; i <= N; i ++){
		for (int j = 1; j <= M; j ++){
			if (P[j] == '*'){
				dp[i][j] = sum[i][j - 1];
			}else if (P[j] == '?'){
				dp[i][j] = dp[i - 1][j - 1] && (S[i] >= 'a' && S[i] <= 'z');
			}else{
				dp[i][j] = dp[i - 1][j - 1] & (S[i] == P[j]);
			}
			if (i == 0) sum[i][j] = dp[i][j];
			else sum[i][j] = sum[i - 1][j] | dp[i][j];
		}
	}
	if (dp[N][M]) printf("Yes\n");
	else printf("No\n");
	
	return 0;
}
