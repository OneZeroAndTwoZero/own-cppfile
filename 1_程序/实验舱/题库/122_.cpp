#include<bits/stdc++.h>
using namespace std;

long long cz(string s,int r){
	long long ans = 0;
	for(int i = 0;i < s.size();i++){
		ans *= r;
		if(s[i] >= '0' && s[i] <= '9') ans += s[i] - 48;
		else ans += s[i] - 'A' + 10;
	}
	return ans;
}

int main(){
	int r;
	cin >> r;
	string s;
	cin >> s;
	cout << cz(s,r) << endl;

	return 0;
}


