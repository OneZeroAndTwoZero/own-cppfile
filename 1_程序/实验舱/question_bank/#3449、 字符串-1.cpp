#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

string s;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

	cin >> s;
	cout << s.size() << "\n" << s[0] << "\n" << s[s.size() - 1] << "\n";

    return 0;
}
