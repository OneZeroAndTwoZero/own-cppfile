#include<bits/stdc++.h>
#define __len(x) (((1LL << (int)(3.3 * x + 1)) + 15))
using namespace std;

int n;
string s;
bool ans = 1;
int val[25] = {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
char f[25] = "10X98765432\0";

bool operate(string &s){
    int res = 0;
    for(int i = 0;i < 17;i ++){
        if(!isdigit(s[i])) return 0;
        res += val[i] * (s[i] - '0');
    }
    res %= 11;
    return f[res] == s[17];
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    while(n --){
        cin >> s;
        if(operate(s)) continue;
        ans = 0;
        cout << s << "\n";
    }
    if(ans) cout << "All passed\n";

    return 0;
}