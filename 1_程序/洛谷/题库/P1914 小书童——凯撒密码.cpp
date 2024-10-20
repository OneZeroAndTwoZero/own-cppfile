#include<bits/stdc++.h>
using namespace std;

int n;
map<char,char> m;
string s;

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

	m['z'] = 'a';
	for(int i = 0;i < 25;i ++){
		m['a' + i] = 'a' + i + 1;
	}
	cin >> n >> s;
	n %= 26;
	for(int i = 0;i < s.size();i ++){
		for(int j = 0;j < n;j ++){
			s[i] = m[s[i]];
		}
	}
	cout << s << endl;

	return 0;
}

