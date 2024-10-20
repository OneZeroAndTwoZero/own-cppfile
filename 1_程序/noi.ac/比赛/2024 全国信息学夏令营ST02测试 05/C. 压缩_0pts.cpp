#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

string s;
long long ans = 0, mod = 998244353;
long long rem[105][105];
int tem[105];

bool check(int l, int r, int len){
    set<int> st[len + 2];
    for (int i = l; i <= r; i ++){
        st[(i - l) % len].insert(tem[i]);
    }
    for (int i = 0; i < len; i ++){
        if(st[i].size() > 1) return 0;
    }
    return 1;
}

long long dfs(int l, int r){
    if (l > r) return 1;
    if (l == r) return 1;
    if (rem[l][r]) return rem[l][r];
    rem[l][r] = 1;
    /*
    for (int i = l; i < r; i ++){
        for (int j = i; j < r; j ++){
            if (dfs(l, i) == 1 && dfs(i + 1, j) == 1 && dfs(j + 1, r)) continue;
            rem[l][r] += (((dfs(l, i) * dfs(i + 1, j)) % mod) * dfs(j + 1, r)) % mod;
        }
    }
    */
    for (int i = l; i < r; i ++){
        rem[l][r] += (dfs(l, i) * dfs(i + 1, r)) % mod;
        rem[l][r] --;
    }
    //cout << l << " " << r << " " << rem[l][r] << "[][]\n";
    int cur = 1;
    for (int i = l + 1; i <= r; i ++){
        cur &= (tem[i] == tem[i - 1]);
    }
    rem[l][r] += cur;
    //cout << l << " " << r << " " << rem[l][r] << ";;;\n";
    return rem[l][r];
}

void dfs(int k){
    if (k == s.size()){
        memset(rem, 0, sizeof(tem));
        for (int i = 0; i < s.size(); i ++){
            //cout << tem[i] << " \n"[i == s.size() - 1];
        }
        ans = (ans + dfs(0, s.size() - 1)) % mod;
        return;
    }
    if (s[k] == '1'){
        tem[k] = 1;
        dfs(k + 1);
        tem[k] = 0;
    }
    tem[k] = 0;
    dfs(k + 1);
    tem[k] = 0;
}

int main(){
    cin >> s;
    dfs(0);
    cout << ans % mod << "\n";

    return 0;
}
