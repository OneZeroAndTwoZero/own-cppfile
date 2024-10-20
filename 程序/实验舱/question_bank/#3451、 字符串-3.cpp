#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

string s;
int l, r;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

	cin >> s >> l >> r;
	for (int i = l; i <= r; i ++){
		cout << s[i];
	}
	cout << "\n";

    return 0;
}
