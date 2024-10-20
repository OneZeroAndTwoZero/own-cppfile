#include<bits/stdc++.h>
using namespace std;

bool ok(string s){
	int f = 0,e = s.size() - 1;
	while(f <= e){
		if(s[f] != s[e]){
			return 0;
		}
		f++;
		e--;
	}
	return 1;
}

int main(){
	string s;
	getline(cin,s);
	int len = s.size();
	for(int i = 2;i <= len;i++){
		for(int j = 0;j <= len - i;j++){
			string a = s.substr(j,i);
			if(ok(a)){
				cout << a << endl;
			}
		}
	}

	return 0;
}

