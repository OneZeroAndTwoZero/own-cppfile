#include<bits/stdc++.h>
using namespace std;

string s;
int b[26] = {};
bool r = 0;

int main(){
	cin >> s;
	for(int i = 0;i < s.size();i++){
		b[s[i] - 'a']++;
	}
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
