#include<bits/stdc++.h>
using namespace std;

int T, M, cnt;
string s[105];
string t, ans;
int sc[105];

bool check(int len, int typ){
	for (int i = 0; i < M; i ++){
		int res = 0;
		for (int j = 0; j < len; j ++){
			res += (s[i][j] == t[j]);
		}
		if (typ == 1) if (res != sc[i]) return 0;
		else{
			if (res > sc[i]) return 0;
			if (res + (s[0].size() - len) > sc[i]) return 0;
		}
	}
	return 1;
}

void dfs(int k){
	if (k == s[0].size()){
		if (check(k, 1)) cnt ++, ans = t;
		return;
	}
	if (!check(k, 0)) return;
	if (cnt > 1) return;
	for (int i = 'A'; i <= 'E'; i ++){
		t.push_back(i);
		dfs(k + 1);
		t.pop_back();
	}
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
		cin >> M;
		cnt = 0, t = "", ans = "";
		for (int i = 0; i < M; i ++){
			cin >> s[i] >> sc[i];
		}
		dfs(0);
		if (!cnt) cout << "Incorrect\n";
		else if (cnt > 1) cout << "Multiple Answers\n";
		else cout << ans << "\n";
	}

	return 0;
}
