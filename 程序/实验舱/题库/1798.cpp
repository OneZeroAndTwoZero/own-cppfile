#include<bits/stdc++.h>
using namespace std;

map<char,int> n;

int main(){
	n['a'] = n['d'] = n['g'] = n['j'] = n['m'] = n['p'] = n['t'] = n['w'] = n[' '] = 1;
	n['b'] = n['e'] = n['h'] = n['k'] = n['n'] = n['q'] = n['u'] = n['x'] = 2;
	n['c'] = n['f'] = n['i'] = n['l'] = n['o'] = n['r'] = n['v'] = n['y'] = 3;
	n['s'] = n['z'] = 4;
	string s;
	getline(cin,s);
	int sum = 0;
	for(int i = 0;i < s.size();i++){
		sum += n[s[i]];
	}
	cout << sum << endl;

	return 0;
}

