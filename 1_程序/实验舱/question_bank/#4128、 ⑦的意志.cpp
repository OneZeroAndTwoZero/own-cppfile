#include<bits/stdc++.h>
using namespace std;

int T;
string s;

void operate(string &s){
	s[s.size() - 1] ++;
	for (int i = s.size() - 1; i > 0; i --){
		s[i - 1] += (s[i] - '0') / 10;
		s[i] = '0' + (s[i] - '0') % 10;
	}
	if (s.front() == '0' + 10){
		s[0] = '0';
		s = "1" + s;
	}
	int pos = 114514;
	for (int i = 0; i < s.size(); i ++){
		if (s[i] != '7') continue;
		pos = i;
		s[i] ++;
		break;
	}
	for (int i = pos + 1; i < s.size(); i ++){
		s[i] = '0';
	}
}

long long turn(string &s){
	long long res = 0;
	for (auto && i : s){
		res = (res << 3) + (res << 1) + (i - '0');
	}
	return res;
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
		cin >> s;
		do{
			operate(s);
			// cout << s << "[]\n";
		}while (turn(s) % 7 == 0);
		cout << s << "\n";
	}
	
	return 0;
}
