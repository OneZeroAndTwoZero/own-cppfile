#include<bits/stdc++.h>
using namespace std;

int in(int a){
	int ans = 0;
	while(a){
		ans += a % 10;
		a /= 10;
	}
	return ans;
}

int st(string s){
	int ans = 0;
	for(int i = 0;i < s.size();i++){
		ans += in(s[i] - 'a' + 1);
	}
	return ans;
}

int main(){
	string s;
	long long k;
	cin >> s >> k;
	int ans = 0;
	ans = st(s);
	for(long long i = 1;i < k;i++){
		if(ans < 10) break;
		ans = in(ans);
	}
	cout << ans << endl;

	return 0;
}

