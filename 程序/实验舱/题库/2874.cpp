#include<bits/stdc++.h>
using namespace std;

string zhuan(long long a){
	string ans = "";
	if(!a) return "0";
	while(a){
		ans = (char)(a % 10 + '0') + ans;
		a /= 10;
	}
	return ans;
}

int main(){
	long long a,b;
	cin >> a >> b;
	long long ans = a + b;
	if(ans < 0){
		cout << "-" << endl;
		ans = abs(ans);
	}
	string s = zhuan(ans);
	for(int i = 0;i < s.size();i ++){
		cout << s[i] << endl;
	}

	return 0;
}

