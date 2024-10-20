#include<bits/stdc++.h>
using namespace std;

bool ok(string s){
	int f = 0,l = s.size() - 1;
	while(f <= l){
		if(s[f] != s[l]) return 0;
		f++,l--;
	}
	return 1;
}

int main(){
	string s;
	getline(cin,s);
	if(ok(s)){
		cout << "Yes" << endl;
	}else{
		cout << "No" << endl;
	}

	return 0;
}


