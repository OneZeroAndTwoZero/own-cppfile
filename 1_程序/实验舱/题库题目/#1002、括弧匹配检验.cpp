#include<bits/stdc++.h>
using namespace std;

stack<char> a;
string s;

bool ok(){
	for(int i = 0;i < s.size();i++){
		if(s[i] == '(' || s[i] == '['){
			a.push(s[i]);
		}else{
			if(!a.size()) return 0;
			if(s[i] == ')'){
				if(a.top() != '(') return 0;
			}else{
				if(a.top() != '[') return 0;
			}
			a.pop();
		}
	}
	return !a.size();
}

int main(){
	cin >> s;
	if(ok()){
		cout << "OK\n";
	}else{
		cout << "Wrong\n";
	}

	return 0;
}

