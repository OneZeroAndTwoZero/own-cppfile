#include<bits/stdc++.h>
using namespace std;

bool hui(string s){
	int n = s.size();
	int f = 0,e = n - 1;
	while(f <= e){
		if(s[f] != s[e]){
			return 0;
		}
		f++,e--;
	}
	return 1;
}

int main(){
	string s;
	getline(cin,s);
	if(hui(s)){
		cout << "YES" << endl;
	}else{
		cout << "NO" << endl;
	}

	return 0;
}

