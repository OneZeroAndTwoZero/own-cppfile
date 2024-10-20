#include<bits/stdc++.h>
using namespace std;

int n;
string s;

void caozuo(string s){
	if(s[0] >= 'a' && s[0] <= 'z'){
		s[0] = s[0] - 32;
	}
	for(int i = 1;i < s.size();i++){
		if(s[i] >= 'A' && s[i] <= 'Z'){
			s[i] = s[i] + 32;
		}
	}
	cout << s << endl;
}

int main(){
	cin >> n;
	getline(cin,s);
	for(int i = 0;i < n;i++){
		getline(cin,s);
		caozuo(s);
    }
	
	return 0;
} 
