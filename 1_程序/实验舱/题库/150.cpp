#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	getline(cin,s);
	s = s + " ";
	int i = 0,sum = 0;
	while(i < s.size()){
		if(s[i] != ' '){
			int pos = s.find(" ",i);
			sum ++;
			i = pos;
		}else{
			i++;
		}
	}
	cout << sum << endl;

	return 0;
}

