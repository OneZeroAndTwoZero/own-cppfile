#include<bits/stdc++.h>
using namespace std;

int main(){
	int max_ = 0;
	int now = 0;
	string s;
	cin >> s;
	for(int i = 0;i < s.size();i++){
		if(s[i] == '('){
			now ++;
		}else if(s[i] == ')'){
			now --;
		}
		max_ = max(max_,now);
	}
	cout << max_ << endl;

	return 0;
}

