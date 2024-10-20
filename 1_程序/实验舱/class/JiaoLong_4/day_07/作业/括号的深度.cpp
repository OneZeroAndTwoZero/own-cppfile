#include<bits/stdc++.h>
using namespace std;

string s;
stack<char> ok;
int ans = 0;

int main(){
	cin >> s;
	for(int i = 0;i < s.size();i ++){
		if(s[i] == '(') ok.push(s[i]);
		else{
			ok.pop();
		}
		if(ok.size() > ans) ans = ok.size();
	}
    printf("%d\n",ans);

	return 0;
}

