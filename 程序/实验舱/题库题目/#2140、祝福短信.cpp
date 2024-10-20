#include<bits/stdc++.h>
using namespace std;

string a[200005];
map<string,int> zhao;

string zhuan(string s){
	for(int i = 0;i < s.size();i++){
		if(s[i] >= 'A' && s[i] <= 'Z'){
			s[i] = (char)s[i] - 'A' + 'a';
		}
	}
	return s;
}

int main(){
	int n,m;
	cin >> n >> m;
	for(int i = 0;i < n;i++){
		cin >> a[i];
		a[i] = zhuan(a[i]);
	}
	for(int i = 0;i < m;i++){
		string t;
		cin >> t;
		t = zhuan(t);
		zhao[t] = 1;
	}
	int gs = 0;
	for(int i = 0;i < n;i++){
		if(zhao[a[i]] == 0) gs ++;
	}
	cout << gs <<endl;

	return 0;
}

