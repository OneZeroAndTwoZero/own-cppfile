#include<bits/stdc++.h>
using namespace std;

string S;

int main(){
#ifndef ONLINE_JUDGE
	freopen("../data.in", "r", stdin);
	freopen("../data.out", "w", stdout);
#endif
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	cin >> S;
	int cnt = 0;
	for (auto && i : S){
		cnt += ((i >= 'a' && i <= 'z') || (i >= 'A' && i <= 'Z'));
	}
	cout << cnt << "\n";

	return 0;
}
