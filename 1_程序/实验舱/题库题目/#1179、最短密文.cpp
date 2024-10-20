#include<bits/stdc++.h>
using namespace std;

int las_s = -0x3f3f3f3f,pos_s = -0x3f3f3f3f,ans = 0x3f3f3f3f;
string s;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    cin >> s;
    for(int i = 0;i < s.size();i ++)
        if(s[i] == 'c') ans = min(ans,i - las_s + 1);
        else if(s[i] == 'y') las_s = pos_s;
        else if(s[i] == 's') pos_s = i;
    cout << ans << "\n";

	return 0;
}