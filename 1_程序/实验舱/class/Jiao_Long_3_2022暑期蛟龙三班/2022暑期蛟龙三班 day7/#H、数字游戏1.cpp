#include<bits/stdc++.h>
using namespace std;

vector<char> a;

int main(){
	string s;
	getline(cin,s);
	for(int i = 0;i < s.size();i++){
		if(s[i] > '0' && s[i] <= '9'){
			a.push_back(s[i]);
		}else if(s[i] == '0'){
			a.clear();
		}else if(s[i] >= 'a' && s[i] <= 'z' && a.size() > 0){
			a.erase(-- a.end());
		}
	}
	if(!a.size()){
		puts("0");
	}
	for(int i = 0;i < a.size();i++){
		cout << a[i];
	}

	return 0;
}

