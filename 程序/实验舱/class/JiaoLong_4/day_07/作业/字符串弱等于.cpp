#include<bits/stdc++.h>
using namespace std;

int t;
string a,b;

bool ok(string s1,string s2){
	if(s1 == s2) return 1;
	if(s1.size() != s2.size() || s1.size() & 1) return 0;
	string s11 = s1.substr(0,s1.size() / 2);
	string s12 = s1.substr(s1.size() / 2,s1.size() / 2);
	string s21 = s2.substr(0,s2.size() / 2);
	string s22 = s2.substr(s2.size() / 2,s2.size() / 2);
	return (ok(s11,s22) && ok(s12,s21)) || (ok(s11,s21) && ok(s12,s22));
}

int main(){
	scanf("%d",&t);
	while(t --){
		cin >> a >> b;
		if(ok(a,b)){
			puts("YES");
		}else{
			puts("NO");
		}
	}

	return 0;
}

