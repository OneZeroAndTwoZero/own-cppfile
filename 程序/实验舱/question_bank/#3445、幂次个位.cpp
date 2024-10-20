#include<bits/stdc++.h>
using namespace std;

string s;
int n,k,cnt = 0,ans;
int vis[15],a[105];

int operate(string &s,int x){
    int res = 0;
    for(int i = 0;i < s.size();i ++){
        res = (res * 10) + s[i] - '0';
        res %= x;
    }
    return res;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> s;
    n = s[s.size() - 1] - '0';
    k = n;
    while(1){
        if(vis[k]) break;
        vis[k] = 1;
        a[++ cnt] = k;
        k = (n * k) % 10;
    }
    ans = operate(s,cnt);
    if(ans == 0) ans = cnt;
    cout << a[ans] << "\n";

    return 0;
}