#include<bits/stdc++.h>
using namespace std;

int n, m;
long long ans = 0;
int a[5005][5005];
int dp[5005][5005];

int operate(int i, int j){
    dp[i][j] = 1;
    int res = 1;
    for (int x = i; x <= n; x ++){
        for (int y = j; y <= m; y ++){
            if (x == i && y == j){
                cout << "1  ";
                continue;
            }else if (x == i){
                dp[x][y] = dp[x][y - 1] && (a[x][y] != a[x][y - 1]);
            }else if (y == j){
                dp[x][y] = dp[x - 1][y] && (a[x][y] != a[x - 1][y]);
            }else{
                dp[x][y] = dp[x - 1][y] && dp[x][y - 1] 
                && (a[x][y] != a[x - 1][y] && a[x][y] != a[x][y - 1]);
            }
            res += dp[x][y];
            cout << dp[x][y] << "  ";
        }
        cout << "\n";
    }
    cout << ";;;;\n\n";
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

    scanf("%d %d", &n, &m);
    for (int i = 1; i <= n; i ++){
        for (int j = 1; j <= m; j ++){
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 1; i <= n; i ++){
        for (int j = 1; j <= m; j ++){
            ans += operate(i, j);
        }
    }
    printf("%lld\n", ans);

    return 0;
}