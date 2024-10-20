#include<bits/stdc++.h>
using namespace std;

int N, cnt;
string S;

int main(){
#ifndef ONLINE_JUDGE
	freopen("../data.in", "r", stdin);
	freopen("../data.out", "w", stdout);
#endif
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	
	cin >> N >> S;
	for (auto && i : S){
		cnt += (i == '*');
		if (i != '*') N -= (i - 'a' + 1);
	}
	if (N < cnt || N > cnt * 26LL){
		cout <<"ERROR\n";
		return 0;
	}
	reverse(S.begin(), S.end());
	for (auto && i : S){
		if (i != '*') continue;
		i = 'a' + min(N - cnt + 1, 26) - 1;
		N -= min(N - cnt + 1, 26);
		cnt --;
	}
	reverse(S.begin(), S.end());
	cout << S << "\n";
	
	return 0;
}
