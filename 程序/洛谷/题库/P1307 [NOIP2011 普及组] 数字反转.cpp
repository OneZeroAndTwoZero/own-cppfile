#include<bits/stdc++.h>
using namespace std;

string s;
bool ok = 0;

int main(){
	cin >> s;
	if(s == "0"){
		printf("0\n");
		return 0;
	}
	if(s[0] == '-'){
		printf("-");
	}
	for(int i = s.size() - 1;i >= 0;i --){
		if(s[i] != '-'){
			if(s[i] != '0' || ok){
				ok = 1;
				cout << s[i];
			}
		}
	}

	return 0;
}

