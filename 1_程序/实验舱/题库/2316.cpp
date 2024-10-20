#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin >> s;
	int max = -1;
	for(int i = 0;i < s.size();i++){
		int sz = s[i] - '0';
		if(sz > max) max = sz;
	}
	cout << max << endl;

	return 0;
}

