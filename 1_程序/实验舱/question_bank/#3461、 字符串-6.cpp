#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

string s;
int x, y;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

	cin >> s >> x >> y;
	for (int i = x; i - x < y && i < s.size(); i ++){
		cout << s[i];
	}
	cout << "\n";

    return 0;
}
