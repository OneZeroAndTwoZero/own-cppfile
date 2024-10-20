#include<bits/stdc++.h>
using namespace std;

int T, N;
string s;
unordered_map<char, int> cnt;

int main(){
#ifndef ONLINE_JUDGE
	freopen("../data.in", "r", stdin);
	freopen("../data.out", "w", stdout);
#endif
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin >> T >> N;
	while (T --){
		cin >> s;
		cnt.clear();
		for (auto && i : s){
			cnt[i] ++;
		}
		bool flag = 1;
		for (int i = 1; i < N; i ++){
			if ((cnt[s[i - 1]] > 1) ^ (cnt[s[i]] > 1)) continue;
			flag = 0;
			break;
		}
		if (flag) printf("T\n");
		else printf("F\n");
	}
	
	return 0;
}
