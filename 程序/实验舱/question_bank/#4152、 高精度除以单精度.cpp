#include<bits/stdc++.h>
using namespace std;

string A;
int B;

pair<string, int> operate(string &s, int x){
	string res = "";
	int cur = 0;
	bool flg = 0;
	for (int i = 0; i < s.size(); i ++){
		cur = (cur << 3) + (cur << 1) + (s[i] ^ 48);
		if (flg || cur >= x || i == s.size() - 1){
			flg = 1;
			res.push_back((cur / x) + '0');
			cur %= x;
		}
	}
	if (res == "") res = "0";
	return {res, cur};
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("../data.in", "r", stdin);
	freopen("../data.out", "w", stdout);
#endif
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin >> A >> B;
	pair<string, int> ans = operate(A, B);
	cout << ans.first << "\n";
	if (ans.second) cout << ans.second << "\n";

	return 0;
}
