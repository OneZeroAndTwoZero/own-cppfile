#include<bits/stdc++.h>
using namespace std;

string ans = "";

void zhuan(char t){
	int a = t - 'A' + 1;
	string tem = "";
	for(int i = 0;i < 5;i++){
		char now = a % 2 == 0 ? '0' : '1';
		tem = now + tem;
		a /= 2;
	}
	cout << tem << "///\n";
	ans = ans + tem;
}

int main(){
	int r,c;
	cin >> r >> c;
	string s;
	cin >> s;
	for(int i = 0;i < s.size();i++){
		zhuan(s[i]);
	}
	while(ans.size() != r * c){
		ans = ans + "0";
	}
	cout << ans << endl;

	return 0;
}

