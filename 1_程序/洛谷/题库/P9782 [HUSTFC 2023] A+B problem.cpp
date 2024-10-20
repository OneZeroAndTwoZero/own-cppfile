#include<bits/stdc++.h>
using namespace std;

int sum;
string s,t;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    cin >> s >> t;
    sum = (s[0] - 'A') + (t[0] - 'A');
    if(sum < 26) cout << (char)(sum + 'A') << "\n";
    else cout << (char)((sum / 26) + 'A') << char((sum % 26) + 'A') << "\n";

	return 0;
}