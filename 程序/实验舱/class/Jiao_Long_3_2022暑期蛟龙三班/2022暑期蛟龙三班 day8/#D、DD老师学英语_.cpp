#include<bits/stdc++.h>
using namespace std;

map<string,int> a;

string x(string s){
	for(int i = 0;i < s.size();i++){
		if(s[i] >= 'A' && s[i] <= 'Z'){
			s[i] = s[i] - 'A' + 'a';
		}
	}
	return s;
}

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		string s;
		cin >> s;
		s = x(s);
		a[s] = 1;
	}
	string s;
	set<string> tem;
	while(cin >> s){
		s = x(s);
		if(a[s] == 1){
		    tem.insert(s);
		}
	}
	cout << tem.size() << endl;

	return 0;
}

