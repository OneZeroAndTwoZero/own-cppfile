#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

string s, t;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

	cin >> s >> t;
	for (int i = 0; i < s.size(); i ++){
		if (i & 1){
			t.push_back(s[i]);
		}else{
			t = s.substr(i, 1) + t;
		}
	}
	reverse(t.begin(), t.end());
	cout << t << "\n";

    return 0;
}
