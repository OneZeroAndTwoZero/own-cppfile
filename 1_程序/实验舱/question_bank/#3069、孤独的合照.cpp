#include<bits/stdc++.h>
using namespace std;

int n,cur;
long long ans = 0;
string s;

long long operate(int pos){
    long long cntl = 0,cntr = 0;
    cur = pos - 1;
    while(cur >= 0 && s[cur] != s[pos]){
        cntl ++,cur --;
    }
    cur = pos + 1;
    while(cur < s.size() && s[cur] != s[pos]){
        cntr ++,cur ++;
    }
    if(cntl + cntr < 2) return 0;
    if(!cntl) return cntr - 1;
    if(!cntr) return cntl - 1;
    return cntl * cntr + (cntl - 1) + (cntr - 1);
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> s;
    for(int i = 0;i < s.size();i ++){
        ans += operate(i);
    }
    cout << ans << "\n";

    return 0;
}