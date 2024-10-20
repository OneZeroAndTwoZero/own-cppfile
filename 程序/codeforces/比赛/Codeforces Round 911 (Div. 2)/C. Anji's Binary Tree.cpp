#include<bits/stdc++.h>
using namespace std;

int t,n;
int l[300005],r[300005];
string s;

int dfs(int u){
    if(l[u] == 0 && r[u] == 0) return 0;
    if(l[u] == 0){
        return dfs(r[u]) + (s[u - 1] != 'R');
    }else if(r[u] == 0){
        return dfs(l[u]) + (s[u - 1] != 'L');
    }else{
        return min(dfs(l[u]) + (s[u - 1] != 'L'),
        dfs(r[u]) + (s[u - 1] != 'R'));
    }
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> t;
    while(t --){
        cin >> n >> s;
        for(int i = 1;i <= n;i ++){
            cin >> l[i] >> r[i];
        }
        cout << dfs(1) << "\n";
    }

    return 0;
}