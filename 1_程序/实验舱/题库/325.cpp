#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	getline(cin,s);
	int n = s.size();
	for(int i = 0;i < n;i++){
		s[i] = (s[i] + 4) % 128;
	}
	cout << s;

	return 0;
}

