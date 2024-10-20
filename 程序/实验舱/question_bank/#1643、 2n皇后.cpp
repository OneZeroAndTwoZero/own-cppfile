#include<bits/stdc++.h>
using namespace std;

int n, ans = 0;
int isplace[15][15];
bool vis[5][25][2];

void dfs(int k, bool col){
    // cout << k << ";;;;;" << col << "\n";
    if (k == n + 1){
        // cout << ";;;;\n";
        if (col == 1) ans ++;
        else dfs(1, !col);
        return;
    }
    for (int i = 1; i <= n; i ++){
        if (!isplace[k][i]) continue;
        if (vis[0][i][col]) continue;
        if (vis[1][k - i + n][col]) continue;
        if (vis[2][k + i][col]) continue;
        isplace[k][i] = 0;
        vis[0][i][col] = 1, vis[1][k - i + n][col] = 1, vis[2][k + i][col] = 1;
        dfs(k + 1, col);
        // cout << k << " " << i << " " << col << "[]\n";
        isplace[k][i] = 1;
        vis[0][i][col] = 0, vis[1][k - i + n][col] = 0, vis[2][k + i][col] = 0;
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

    scanf("%d", &n);
    for (int i = 1; i <= n; i ++){
        for (int j = 1; j <= n; j ++){
            scanf("%d", &isplace[i][j]);
        }
    }
    dfs(1, 0);
    printf("%d\n", ans);

    return 0;
}