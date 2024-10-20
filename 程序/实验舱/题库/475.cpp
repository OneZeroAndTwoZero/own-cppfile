#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	getline(cin,s);
	string ans = "";
	for(int i = 0;i < s.size();i++){
		if(s[i] != '6'){
			ans = ans + s[i];
		}else{
			int gs = 0;
			for(int j = i;j < s.size();j++){
				if(s[j] == '6') gs ++,i ++;
				else break;
			}
			i --;
			if(gs > 9) ans = ans + "27";
			else if(gs > 3) ans = ans + "9";
			else while(gs --) ans = ans + "6";
		}
	}
	cout << ans << endl;

	return 0;
}

