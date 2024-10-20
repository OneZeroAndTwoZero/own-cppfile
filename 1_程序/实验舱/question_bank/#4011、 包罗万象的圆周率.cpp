#include<bits/stdc++.h>
using namespace std;

string s;
int k, ans = 0;

bool isprime(int x){
	if (x < 2) return 0;
	for (int i = 2; i <= x / i; i ++){
		if (x % i) continue;
		return 0;
	}
	return 1;
}

int turnint(string &s){
	int res = 0;
	for (auto && i : s){
		res = (res << 3) + (res << 1) + (i ^ 48);
	}
	return res;
}

bool check(int st, int len){
	string tmp = s.substr(st, len);
	bool res = 1;
	res &= isprime(turnint(tmp));
	reverse(tmp.begin(), tmp.end());
	res &= isprime(turnint(tmp));
	return res;
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("../data.in", "r", stdin);
	freopen("../data.out", "w", stdout);
#endif
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	
	cin >> s >> k;
	for (int i = 0; i + k <= s.size(); i ++){
		ans += check(i, k);
	}
	if (!ans) printf("None\n");
	else printf("%d\n", ans);
	
	return 0;
}
