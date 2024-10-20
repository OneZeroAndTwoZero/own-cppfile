#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

int n, m;
vector<int> d;
int rem[15][15][3];

int dfs(int len, int pre, int islim){
    if (len < 0) return 1;
    if (rem[len][pre][islim]) return rem[len][pre][islim];
    int lim = d[len];
    if (islim) lim = 9;
    // cout << len << " " << pre << " " << islim << " []\n";
    for (int i = 0; i <= lim; i ++){
        if (i == 4) continue;
        if (pre == 6 && i == 2) continue;
        rem[len][pre][islim] += dfs(len - 1, i, islim || (i != lim));
    }
    // cout << len << " " << pre << " " << res << ";;;\n";
    return rem[len][pre][islim];
}

int solve(int x){
    if (!x) return 1;
    memset(rem, 0, sizeof(rem));
    d.clear();
    while (x){
        d.push_back(x % 10);
        x /= 10;
    }
    return dfs(d.size() - 1, 11, 0);
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    while(~scanf("%d %d", &n, &m)){
        if (!n && !m) break;
        printf("%d\n", solve(m) - solve(n - 1));
    }

    return 0;
}