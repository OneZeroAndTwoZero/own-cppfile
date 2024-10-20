#include<bits/stdc++.h>
using namespace std;

string cs = "IOSHZXN";

bool ok(string s){
	for(int i = 0;i < s.size();i++){
		bool pd = 0;
		for(int j = 0;j < cs.size();j++){
			if(s[i] == cs[j]){
				pd = 1;
				break;
			}
		}
		if(pd == 0) return 0;
	}
	return 1;
}

int main(){
	int t;
	cin >> t;
	for(int i = 0;i < t;i++){
		string s;
		cin >> s;
		if(ok(s)){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}
	}

	return 0;
}


