#include<bits/stdc++.h>
using namespace std;

int T;
long long N;
string ans;

string turn(long long x){
	string res = "";
	while (x){
		res.push_back(x % 9 + '0');
		x /= 9;
	}
	reverse(res.begin(), res.end());
	return res;
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("../data.in", "r", stdin);
	freopen("../data.out", "w", stdout);
#endif
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> T;
	while (T --){
		cin >> N;
		ans = turn(N);
		// cout << ans << "[]\n";
		for (int i = ans.size() - 1; i; i --){
			if (ans[i] > '0') continue;
			ans[i] += 9;
			ans[i - 1] --;
		}
		if (ans.front() == '0') ans = ans.substr(1);
		cout << ans << "\n";
	}
	
	return 0;
}
