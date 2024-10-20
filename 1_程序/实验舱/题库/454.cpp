#include<bits/stdc++.h>
using namespace std;

stack<char> yu;

int main(){
	string s;
	getline(cin,s);
	for(int i = 0;i < s.size();i++){
		if(s[i] == '@'){
			yu.pop();
		}else if(s[i] == '#'){
			while(!yu.empty()){
				yu.pop();
			}
		}else{
			yu.push(s[i]);
		}
	}
	string ans = "";
	while(!yu.empty()){
		char t = yu.top();
		ans = t + ans;
		yu.pop();
	}
	cout << ans << endl;

	return 0;
}

