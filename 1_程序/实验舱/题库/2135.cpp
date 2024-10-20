#include<bits/stdc++.h>
using namespace std;

bool a[128] = {0};

int main(){
	string s1,s2;
	getline(cin,s1);
	getline(cin,s2);
	string s = s1 + s2;
	for(int i = 0;i < s.size();i++){
		if(!a[s[i]]){
			a[s[i]] = 1;
			cout << s[i];
		}
	}

	return 0;
}

