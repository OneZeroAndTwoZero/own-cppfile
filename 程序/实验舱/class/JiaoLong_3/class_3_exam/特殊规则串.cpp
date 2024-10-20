#include<bits/stdc++.h>
using namespace std;

int n;

bool ok(string s){
	if(s == "") return 0;
	if(s == "A") return 1;
	if(s[0] == 'B' && s[s.size() - 1] == 'S'){
		string t = s.substr(1,s.size() - 2);
		if(ok(t)) return 1;
	}
	for(int i = 0;i < s.size();i ++){
		if(s[i] == 'N'){
			string s1 = s.substr(0,i);
			string s2 = s.substr(i + 1,s.size() - i - 1);
			if(ok(s1) && ok(s2)) return 1;
		}
	}
	return 0; 
}

int main(){
	cin >> n;
	string s;
	for(int i = 0;i < n;i++){
		cin >> s;
		if(ok(s)){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}
	}
	
	return 0;
} 
