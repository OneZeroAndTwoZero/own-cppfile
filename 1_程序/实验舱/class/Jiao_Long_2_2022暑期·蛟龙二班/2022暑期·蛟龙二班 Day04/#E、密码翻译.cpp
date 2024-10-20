#include<bits/stdc++.h>
using namespace std;

string s;

int main(){
	getline(cin,s);
	for(int i = 0;i < s.size();i++){
		if(s[i] >= 'A' && s[i] < 'Z'){
			s[i] = (char)(s[i] + 1);
		}else if(s[i] >= 'a' && s[i] < 'z'){
			s[i] = (char)(s[i] + 1);
		}else if(s[i] == 'z' || s[i] == 'Z'){
			s[i] = (char)(s[i] - 25);
		}
	}
	cout << s << endl;
	
	return 0;
}
