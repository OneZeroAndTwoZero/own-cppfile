#include<bits/stdc++.h>
using namespace std;

string s;
stack<int> ok;

int main(){
	cin >> s;
	for(int i = 0;i < s.size();i ++){
		if(s[i] == '(') ok.push(i);
		else{
		    printf("%d %d\n",ok.top(),i);
			ok.pop();
		}
	}

	return 0;
}

