#include<bits/stdc++.h>
using namespace std;

int main(){
	string s = "0";
	string ans = "";
	int n;
	cin >> n;
	for(int k = 0;k < n;k ++){
		ans = "";
		for(int i = 0;i < s.size();i++){
			if(s[i] == '0'){
				ans += "1";
			}else{
				ans += "01";
			}
		}
		s = ans;
	}
	cout << s << endl;

	return 0;
}

