#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

int T;
string s;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

	cin >> T;
	getline(cin, s);
	while (T --){
		getline(cin, s);
		for (auto && i : s){
			if (i == ' ') continue;
			cout << i;
		}
		cout << "\n";
	}

    return 0;
}
