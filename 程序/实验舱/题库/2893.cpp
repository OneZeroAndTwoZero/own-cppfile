#include<bits/stdc++.h>
using namespace std;

int cz1(string s){
	int ans = 0;
	for(int i = 0;i < s.size();i++){
		ans = ans * 2;
		ans += (int)(s[i] - '0');
	}
	return ans;
}

string cz2(int a){
	if(!a) return "0";
	string ans = "";
	while(a){
		ans = (char)('0' + a % 2) + ans;
		a /= 2;
	}
	return ans;
}

int main(){
	int n;
	cin >> n;
	while(n --){
		bool which;
		string s;
		int a;
		cin >> which;
		if(which){
			cin >> s;
			cout << cz1(s) << endl;
		}else{
			cin >> a;
			cout << cz2(a) << endl;
		}
	}

	return 0;
}

