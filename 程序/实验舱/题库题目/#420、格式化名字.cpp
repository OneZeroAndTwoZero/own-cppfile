#include<bits/stdc++.h>
using namespace std;

string s;

int main(){
	getline(cin,s);
	for(int i = 0;i < s.size();i++){
		if(i == 0 || s[i - 1] == ' '){
			if(s[i] >= 'a' && s[i] <= 'z'){
				s[i] = s[i] - 'a' + 'A';
			}
		}else{
			if(s[i] >= 'A' && s[i] <= 'Z'){
				s[i] = s[i] - 'A' + 'a';
			}
		}
	}
	cout << s << endl;

	return 0;
}

