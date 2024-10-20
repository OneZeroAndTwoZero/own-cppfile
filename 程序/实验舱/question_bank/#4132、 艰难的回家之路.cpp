#include<bits/stdc++.h>
using namespace std;

int T;
int N, M, K;
string s;
int dp[1000006];
bool vis[1000006];

int dfs(int x){
	if (x > N) return 0;
	if (s[x] == 'C') return 0x3f3f3f3f;
	if (vis[x]) return dp[x];
	vis[x] = 1;
	if (s[x] != 'C' && s[x] != 'W'){
		for (int i = x + 1; i - x <= M; i ++){
			if (i <= N && s[i] == 'C') continue;
			dp[x] = min(dp[x], dfs(i));
		}
	}else{
		dp[x] = min(dp[x], dfs(x + 1) + 1);
	}
	return dp[x];
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("../data.in", "r", stdin);
	freopen("../data.out", "w", stdout);
#endif
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin >> T;
	while (T --){
		cin >> N >> M >> K;
		cin >> s;
		s = "*" + s;
		for (int i = 0; i <= N + 1; i ++){
			dp[i] = 0x3f3f3f3f;
			vis[i] = 0;
		}
		dfs(0);
		if (dp[0] <= K) cout << "YES\n";
		else cout << "NO\n";
	}

	return 0;
}
