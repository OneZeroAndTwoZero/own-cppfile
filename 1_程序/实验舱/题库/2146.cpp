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

int main(){
	int n;
	string s;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> s;
		if(ok(s)){
			cout << "jing shen xiao huo" << endl;
		}else{
			cout << "bu shi" << endl;
		}
	}

	return 0;
}

