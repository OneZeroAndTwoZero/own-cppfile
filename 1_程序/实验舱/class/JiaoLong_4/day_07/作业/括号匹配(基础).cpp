#include<bits/stdc++.h>
using namespace std;

string s;
stack<char> ok;

int main(){
	cin >> s;
	for(int i = 0;i < s.size();i ++){
		if(s[i] == '(') ok.push(s[i]);
		else{
			if(ok.size()){
				ok.pop();
			}else{
				puts("No");
				return 0;
			}
		}
	}
	if(ok.size()){
		puts("No");
	}else{
		puts("Yes");
	}

	return 0;
}

