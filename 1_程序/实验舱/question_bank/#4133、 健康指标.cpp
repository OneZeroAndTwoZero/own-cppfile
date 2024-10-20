#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

int a, b;
string s[2][2] = {{"zhengchang", "shuzhangya yichang"}, {"shousuoya yichang", "buzhengchang"}};

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

	cin >> a >> b;
	cout << s[!(a >= 90 && a <= 140)][!(b >= 60 && b <= 90)] << "\n";

    return 0;
}
