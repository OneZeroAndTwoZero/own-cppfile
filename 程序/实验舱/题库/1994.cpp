#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	string s;
	getline(cin,s);
	while(n --){
		getline(cin,s);
		if(s[s.size() - 1] != '?'){
			cout << "enen" << endl;
		}else{
			if(s.find("SYC",0) != s.npos){
				cout << "Yes!" << endl;
			}else{
				cout << "No." << endl;
			}
		}
	}

	return 0;
}

