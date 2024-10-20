#include<bits/stdc++.h>
using namespace std;

bool ok(string s){
	for(int i = 0;i < s.size();i++){
		if(!(s[i] >= '0' && s[i] <= '9')){
			return 0;
		}
	}
	return 1;
}

int main(){
	int n;
	cin >> n;
	string s;
	int no = 0;
	while(cin >> s){
		if(s == "."){
			break;
		}
		if(ok(s)){
			no ++;
			if(no == n){
				cout << s << endl;
			}
		}
	}

	return 0;
}

