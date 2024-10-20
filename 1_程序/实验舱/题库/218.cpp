#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	int n;
	cin >> s >> n;
	for(int i = n;i < n + s.size();i++){
		cout << s[i % s.size()];
	}

	return 0;
}

