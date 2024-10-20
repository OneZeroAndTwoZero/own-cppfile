#include<bits/stdc++.h>
using namespace std;

string s;

int main(){
	getline(cin,s);
	for(int i = 0;i < s.size();i++){
		if(s[i] >= '0' && s[i] <= '9'){
			cout << i + 1 << " ";
		}
	}
	
	return 0;
} 
