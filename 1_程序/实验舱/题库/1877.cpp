#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin >> s;
	bool f = 1;
	string ans = "";
	for(int i = 0;i < s.size();i++){
		if(s[i] >= 'a' && s[i] <= 'z'){
			ans += s[i];
		}else{
			if(f){
			    f = 0;
			    ans += s[i] - 'A' + 'a';
			}
			else{
				ans += "_";
				ans += s[i] - 'A' + 'a';
			}
		}
	}
	cout << ans << endl;

	return 0;
}

