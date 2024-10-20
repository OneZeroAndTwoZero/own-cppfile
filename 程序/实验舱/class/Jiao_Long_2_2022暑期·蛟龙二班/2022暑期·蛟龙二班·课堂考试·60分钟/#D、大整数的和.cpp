#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	getline(cin,s);
	int sum = 0;
	for(int i = 0;i < s.size();i++){
		if(s[i] >='0' && s[i] <='9'){
			sum = sum +(int)s[i] - 48;
		}
	}
	cout << sum << endl;
	
	return 0;
}
