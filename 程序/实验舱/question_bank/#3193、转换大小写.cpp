#include<bits/stdc++.h>
using namespace std;

string s;
int cntmin = 0,cntmax = 0;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> s;
    for(int i = 0;i < s.size();i ++){
        if(s[i] >= 'a' && s[i] <= 'z'){
            cntmin ++;
        }else if(s[i] >= 'A' && s[i] <= 'Z'){
            cntmax ++;
        }
    }
    cout << min(cntmin,cntmax) << "\n";

	return 0;
}