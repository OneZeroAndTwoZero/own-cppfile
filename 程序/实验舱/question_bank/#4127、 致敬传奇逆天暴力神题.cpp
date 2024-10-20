#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

int n, m;
int ans = 0;

void dfs(int a, int b, int preop){ // a / b
    if (a > n || b > m) return;
    ans ++;
    dfs (a + 2 * b, b, 2);
    if (preop == 1) return; // last a/b -> b/a
    dfs (b, a, 1);
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %d", &n, &m);
    dfs(1, 2, -1);
    printf("%d\n", ans);

    return 0;
}
