#include<bits/stdc++.h>
using namespace std;

stack<int> yu;

int main(){
	string s;
	cin >> s;
	for(int i = 0;i < s.size();i++){
		if(s[i] == '('){
			yu.push(i);
		}else{
			cout << yu.top();
			cout << " " << i << endl;
			yu.pop();
		}
	}

	return 0;
}

