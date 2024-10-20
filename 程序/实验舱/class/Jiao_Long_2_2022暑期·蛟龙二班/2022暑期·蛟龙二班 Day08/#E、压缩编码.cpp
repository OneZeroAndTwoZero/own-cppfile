#include<bits/stdc++.h>
using namespace std;

string s;

string A(string s){
	int len = s.size();
	for(int i = 0;i < len;i++){
		if(s[i] >= 'a' && s[i] <= 'z'){
			s[i] = s[i] - 32;
		}
	}
	return s;
}

int main(){
	getline(cin,s);
	s = A(s);
	for(int i = 0;i < s.size();i = i){
		int sum = 0;
		char now = s[i];
		while(s[i] == now && i < s.size()){
			sum ++;
			i++;
		}
		printf("(%c,%d)",now,sum);
	}

	return 0;
}

