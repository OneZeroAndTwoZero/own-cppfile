#include<bits/stdc++.h>
using namespace std;

string s;

void operate1(){
	for(int i = 0;i < s.size();i ++){
		if(s[i] >= 'A' && s[i] <= 'Z'){
			s[i] = s[i] - 'A' + 'a';
		}
	}
}

void operate2(){
	for(int i = 0;i < s.size();i ++){
		if(s[i] == '_'){
			s[i] = '-';
		}
	}
}

void operate3(){
	s = "solution-" + s;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

	cin >> s;
	operate1();
	operate2();
	operate3();
	cout << s << "\n";

	return 0;
}