#include<bits/stdc++.h>
using namespace std;

string x(string s){
	for(int i = 0;i < s.size();i++){
		if(s[i] >= 'A' && s[i] <= 'Z'){
			s[i] = s[i] - 'A' + 'a';
		}
	}
	return s;
}

string s;
int n,m,ans = 0;
string a[20005] = {""};
map<string,int> zhao;

int main(){
	cin >> n >> m;
	for(int i = 0;i < n;i++){
		cin >> a[i];
		a[i] = x(a[i]);
	}
	for(int i = 0;i < m;i++){
		cin >> s;
		s = x(s);
		zhao[s] += 1;
	}
	ans = 0;
	for(int i = 0;i < n;i++){
		if(!zhao[a[i]]){
			ans ++;
		}
	}
	cout << ans << endl;

	return 0;
}

