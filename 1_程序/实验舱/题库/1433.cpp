#include<bits/stdc++.h>
using namespace std;

int b[26] = {0};

int main(){
	string s;
	cin >> s;
	for(int i = 0;i < s.size();i++){
		b[s[i] - 'a'] ++;
	}
	int max = -1;
	for(int i = 0;i < 26;i++){
		if(b[i] > max) max = b[i];
	}
	cout << max << endl;

	return 0;
}

