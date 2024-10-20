#include<bits/stdc++.h>
using namespace std;

string x(string s){
	for(int i = 0;i < s.size();i++){
		if(s[i] >= 'A' && s[i] <= 'Z'){
			s[i] = s[i] + 'a' - 'A';
		}
	}
	return s;
}

map<string,int> a;
set<string> b;

int main(){
	int n,m;
	cin >> n >> m;
	for(int i = 0;i < n;i++){
		string s;
		cin >> s;
		s = x(s);
		a[s] = 1;
	}
	for(int i = 0;i < m;i++){
		string s;
		cin >> s;
		s = x(s);
		b.insert(s);
	}
	
	set<string> :: iterator it;
	int sum = 0;
	for(it = b.begin();it != b.end();it++){
		string tem = *it;
		tem = x(tem);
		if(a[*it] == 1){
			sum ++;
		}
	}
	cout << n - sum << endl;

	return 0;
}

