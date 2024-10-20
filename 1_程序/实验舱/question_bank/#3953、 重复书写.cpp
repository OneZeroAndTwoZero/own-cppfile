#include<bits/stdc++.h>
using namespace std;

string S = "", X;
int cur = 1, pos = 0;

int main(){
#ifndef ONLINE_JUDGE
	freopen("../data.in", "r", stdin);
	freopen("../data.out", "w", stdout);
#endif
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin >> X;
	while (pos < X.size()){
		S.push_back(X[pos]);
		pos += (cur ++);
	}
	cout << S << "\n";

	return 0;
}
