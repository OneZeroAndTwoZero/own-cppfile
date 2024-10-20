#include<bits/stdc++.h>
using namespace std;

stack<char> a;
string s,ans = "";

int main(){
	cin >> s;
	for(int i = 0;i < s.size();i++){
		if(s[i] == '('){
			a.push('(');
		}else if(s[i] == ')'){
			while(a.top() != '('){
				ans = ans + a.top();
				a.pop();
			}
			a.pop();
		}else if(!a.size()) ans = ans + s[i];
		else{
			a.push(s[i]);
		}
	}
	cout << ans << endl;

	return 0;
}

