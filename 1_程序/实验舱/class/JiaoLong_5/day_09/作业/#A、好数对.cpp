#include<bits/stdc++.h>
using namespace std;

long long ans = 1;
string s; 

int main(){
	cin >> s;
	for(int i = 0;i < s.size();i ++){
		ans *= s[i] - '0' + 1;
		ans %= 1000000007;
	}
	cout << ans << endl;

	return 0;
}

