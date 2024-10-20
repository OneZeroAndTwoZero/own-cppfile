#include<bits/stdc++.h>
using namespace std;

string A, B, ans = "";

int main(){
#ifndef ONLINE_JUDGE
	freopen("../data.in", "r", stdin);
	freopen("../data.out", "w", stdout);
#endif
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	
	cin >> A >> B;
	reverse(A.begin(), A.end());
	reverse(B.begin(), B.end());
	while (A.size() < B.size()) A.push_back('0');
	while (A.size() > B.size()) B.push_back('0');
	for (int i = 0; i < A.size(); i ++){
		ans.push_back(((A[i] - '0') ^ (B[i] - '0')) + '0');
	}
	while (ans.back() == '0' && ans.size() > 1) ans.pop_back();
	reverse(ans.begin(), ans.end());
	cout << ans << "\n";
	
	return 0;
}
