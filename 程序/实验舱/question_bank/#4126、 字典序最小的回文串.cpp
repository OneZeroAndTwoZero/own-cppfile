#include<bits/stdc++.h>
using namespace std;

string s;
vector<int> pos;

int main(){
#ifndef ONLINE_JUDGE
	freopen("../data.in", "r", stdin);
	freopen("../data.out", "w", stdout);
#endif
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> s;
	int l = 0, r = s.size() - 1;
	while (l <= r){
		if (s[l] != s[r]) pos.push_back(l);
		l ++, r --;
	}
	for (int l = 0, r = s.size() - 1; l <= r; l ++, r --){
		if (pos.size() == 0){
			if (s[l] == 'a') continue;
			s[l] = s[r] = 'a';
			break;
		}else if (pos.size() == 1){
			if (l != pos.front()) continue;
			if ((s[l] == 'a' || s[r] == 'a') && (s.size() & 1)) s[s.size() >> 1] = 'a';
			s[l] = s[r] = 'a';
		}else{
			if (l != pos.front() && l != pos.back()) continue;
			s[l] = s[r] = min(s[l], s[r]);
		}
	}
	cout << s << "\n";
	
	return 0;
}
