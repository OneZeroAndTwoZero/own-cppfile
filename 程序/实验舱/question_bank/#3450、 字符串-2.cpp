#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

string s;
string a = "", b = "";

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

	cin >> s;
	for (int i = 0; i < s.size(); i ++){
		if (i & 1) b.push_back(s[i]);
		else a.push_back(s[i]);
	}
	cout << a << "\n" << b << "\n";

    return 0;
}
