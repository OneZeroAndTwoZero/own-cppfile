#include<bits/stdc++.h>
using namespace std;

bool ok(string s){
	bool r = 1;
	if(isdigit(s[0])){
		r = 0;
		return r;
	}
	for(int i = 0;i < s.size();i++){
		if(!(isdigit(s[i]) || isalpha(s[i]) || s[i] == '_')){
			r = 0;
			return r;
		}
	}
	return r;
}

int main(){
	string s;
	while(cin >> s){
		if(ok(s)){
			cout << "yes" << endl;
		}else{
			cout << "no" << endl;
		}
	}
	
	return 0;
} 
