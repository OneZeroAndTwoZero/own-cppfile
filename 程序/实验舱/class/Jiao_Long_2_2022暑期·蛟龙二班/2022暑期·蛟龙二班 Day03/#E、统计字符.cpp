#include<bits/stdc++.h>
using namespace std;

string s;
int b[26] = {};
	
int main(){
	for(int i = 0;;i++){
		cin >> s[i];
		if(s[i] == '#'){
			break;
		}
		b[s[i] - 'a']++;	
	}
	for(int i = 0;i < 26;i++){
		if(b[i] != 0){
			char c = (char)(i + 97);
			printf("%c:%d\n",c,b[i]);
		}
	}
	
	return 0;
}
