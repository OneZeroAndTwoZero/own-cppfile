#include<bits/stdc++.h>
using namespace std;

string s;
int b[128] = {0};

int main(){
	getline(cin,s);
	for(int i = 0;i < s.size();i++){
		b[s[i]]++;
	}
	for(int i = 0;i < 128;i++){
		for(int j = 0;j < b[i];j++){
			cout << (char)i;
		}
	}

	return 0;
}

