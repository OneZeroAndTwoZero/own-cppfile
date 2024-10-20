#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin >> s;
	int b[26] = {};
	for(int i = 0;i < s.size();i++){
		b[s[i] - 'a']++;
	}
	bool r = 0;
	for(int i = 0;i < s.size();i++){
		if(b[s[i] - 'a'] == 1){
			r = 1;
			cout << s[i] << endl;
			break;
		}
	}
	if(!r){
		cout << "no" << endl;
	}
	
	return 0;
}
