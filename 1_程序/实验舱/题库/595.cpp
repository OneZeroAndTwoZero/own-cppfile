#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	getline(cin,s);
	for(int i = 0;i < s.size();i++){
		int gs = 0;
		char bz = s[i];
		for(int j = i;j < s.size();j++){
			if(s[j] == bz) gs ++,i ++;
			else break;
		}
		i --;
		if(gs > 1){
			cout << gs;
		}
		cout << s[i];
	}

	return 0;
}

