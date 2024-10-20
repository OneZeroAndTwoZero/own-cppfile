#include<bits/stdc++.h>
using namespace std;

string s;
int cnt[5];

int main(){
#ifndef ONLINE_JUDGE
	freopen("../data.in", "r", stdin);
	freopen("../data.out", "w", stdout);
#endif
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> s;
	for (auto && i : s){
		if (isdigit(i)) cnt[2] ++;
		else if (i >= 'A' && i <= 'Z') cnt[0] ++;
		else if (i >= 'a' && i <= 'z') cnt[1] ++;
		else cnt[3] ++;
	}
	for (int i = 0; i < 4; i ++){
		cout << cnt[i] << " \n"[i == 3];
	}

	return 0;
}
