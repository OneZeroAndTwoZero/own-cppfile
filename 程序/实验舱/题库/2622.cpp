#include<bits/stdc++.h>
using namespace std;

string s[105];

string zhuan(int a){
	string ans = "";
	while(a){
		char n = a % 2 == 0 ? '*' : '.';
		a /= 2;
		ans = n + ans;
	}
	while(ans.size() != 8){
		ans = "*" + ans;
	}
	return ans;
}

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		int tem;
		cin >> tem;
		s[i] = zhuan(tem);
	}
	for(int i = 0;i < 8;i++){
		for(int j = 0;j < n;j++){
			cout << s[j][i];
		}
		cout << endl;
	}

	return 0;
}

