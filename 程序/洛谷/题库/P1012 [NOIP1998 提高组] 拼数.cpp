#include<bits/stdc++.h>
using namespace std;

int n;
string s[25];

bool cmp(string a,string b){
	string a1 = a + b,b1 = b + a;
	return a1 > b1;
}

int main(){
	cin >> n;
	for(int i = 0;i < n;i ++){
		cin >> s[i];
	}
	sort(s,s + n,cmp);
	for(int i = 0;i < n;i ++){
		cout << s[i];
	}
	puts("");

	return 0;
}

