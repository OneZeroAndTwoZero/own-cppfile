#include<bits/stdc++.h>
using namespace std;

map<char,char> huan;

int main(){
	huan['q'] = 'w',huan['w'] = 'e',huan['e'] = 'r',huan['r'] = 't',huan['t'] = 'y',huan['y'] = 'u',huan['u'] = 'i',huan['i'] = 'o',huan['o'] = 'p',huan['p'] = 'q';
	huan['a'] = 's',huan['s'] = 'd',huan['d'] = 'f',huan['f'] = 'g',huan['g'] = 'h',huan['h'] = 'j',huan['j'] = 'k',huan['k'] = 'l',huan['l'] = 'a';
	huan['z'] = 'x',huan['x'] = 'c',huan['c'] = 'v',huan['v'] = 'b',huan['b'] = 'n',huan['n'] = 'm',huan['m'] = 'z';
	string s;
	cin >> s;
	for(int i = 0;i < s.size();i++){
		s[i] = huan[s[i]];
	}
	cout << s << endl;

	return 0;
}

