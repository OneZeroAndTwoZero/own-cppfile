#include<bits/stdc++.h>
using namespace std;

string cz(string s){
	string ans = "";
	for(int i = 0;i < s.size();i++){
		if(s[i] >= 'A' && s[i] <= 'Z'){
			ans += (s[i] + 32);
		}else if(s[i] >= 'a' && s[i] <= 'z'){
			ans += (s[i] - 32);
		}else{
			ans += (9 - (s[i] - '0')) + '0';
		}
	}
	return ans;
}

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		string s;
		cin >> s;
		cout << cz(s) << endl;
	}

	return 0;
}

