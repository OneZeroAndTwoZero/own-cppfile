#include<bits/stdc++.h>
using namespace std;

bool ok(string s){
	int a[s.size()];
	int j = s.size() - 1;
	for(int i = 0;i < s.size();i++,j--){
		a[j] = s[i];
	}
	for(int i = 0;i < s.size();i++){
		if(a[i] != s[i]){
			return 0;
		}
	}
	return 1;
}

int main(){
	int n;
	cin >> n;
	getchar();
	for(int i = 1;i <= n;i++){
		string s;
		getline(cin,s);
		cout << ok(s) << endl;
	}
	
	return 0;
}
