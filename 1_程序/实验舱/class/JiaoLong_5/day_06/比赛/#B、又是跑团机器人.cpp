#include<bits/stdc++.h>
using namespace std;

string s,tem = "";
int ans = 0,fh = 1;

int zhuan(string t){
	int re = 0;
	for(int i = 0;i < t.size();i++){
		re *= 10;
		re += (t[i] - '0');
	}
	return re;
}

int main(){
	cin >> s;
	s = s + "+";
	for(int i = 0;i < s.size();i++){
		if(s[i] == '-'){
			ans += fh * zhuan(tem);
			fh = -1;
			tem = "";
		}
		else if(s[i] == '+'){
			ans += fh * zhuan(tem);
			fh = 1;
			tem = "";
		}else{
			tem = tem + s[i];
		}
	}
	cout << ans << " " << ans << endl;
	
	return 0;
}

