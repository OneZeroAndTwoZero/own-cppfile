#include<bits/stdc++.h>
using namespace std;

bool ok(string s,int n){
	string check = s.substr(0,n);
	for(int i = 1;i < s.size() / n;i++){
		string tem = s.substr(i * n,n);
		if(tem != check) return 0;
	}
	return 1;
}

int main(){
	string s;
	getline(cin,s);
	int max = 1;
	for(int i = 1;i < s.size();i++){
		if(s.size() % i == 0){
			if(ok(s,s.size() / i)) max = i;
		}
	}
	cout << max << endl;

	return 0;
}

