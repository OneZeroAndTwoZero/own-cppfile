#include<bits/stdc++.h>
using namespace std;

map<string,int> ci;
string s;

int main(){
	while(1){
		getline(cin,s);
		if(s[0] == ' ' || s == "") break;
		string x = "";
		for(int i = 0;i < s.size();i++){
			x += s[i];
			ci[x] ++;
		}
	}
	while(cin >> s){
		cout << ci[s] << endl;
	}

	return 0;
}

