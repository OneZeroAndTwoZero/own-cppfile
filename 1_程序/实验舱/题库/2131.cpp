#include<bits/stdc++.h>
using namespace std;

bool ok(string s){
	if(s[0] != s[1]) return 0;
	if(s[s.size() - 2] != s[s.size() - 1]) return 0;
	for(int i = 1;i < s.size() - 2;i++){
		if(s[i] != s[i + 1] && s[i] != s[i - 1]) return 0;
	}
	return 1;
}

string cz(string s){
	string ans = "";
	if(s[0] != s[1]) ans = s[0] + s[0];
	else ans = s[0];
	for(int i = 1;i < s.size() - 1;i++){
		if(s[i] != s[i + 1] && s[i] != s[i - 1]){
			ans = ans + s[i] + s[i];
		}else{
			ans = ans + s[i];
		}
	}
	if(s[s.size() - 2] != s[s.size() - 1]){
		ans = ans + s[s.size() - 1] + s[s.size() - 1];
	}
	return ans;
}

int main(){
	int n;
	string s;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> s;
		if(ok(s)){
			cout << "jing shen xiao huo" << endl;
		}else{
			cout << cz(s) << endl;
		}
	}

	return 0;
}

