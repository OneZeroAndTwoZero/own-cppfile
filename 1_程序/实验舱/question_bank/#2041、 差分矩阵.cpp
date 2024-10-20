#include<bits/stdc++.h>
using namespace std;

int n, m, q;
int sx, sy, ex, ey, c;
int a[1005][1005], d[1005][1005], ans;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %d %d", &n, &m, &q);
    for (int i = 1; i <= n; i ++){
        for (int j = 1; j <= m; j ++){
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 1; i <= n; i ++){
        for (int j = 1; j <= m; j ++){
            d[i][j] = a[i][j] - a[i - 1][j] - a[i][j - 1] + a[i - 1][j - 1];
        }
    }
    while (q --){
        scanf("%d %d %d %d %d", &sx, &sy, &ex, &ey, &c);
        d[sx][sy] += c;
        d[ex + 1][ey + 1] += c;
        d[sx][ey + 1] -= c;
        d[ex + 1][sy] -= c;
    }
    for (int i = 1; i <= n; i ++){
        for (int j = 1; j <= m; j ++){
            a[i][j] = a[i - 1][j] + a[i][j - 1] + d[i][j] - a[i - 1][j - 1];
        }
    }
    for (int i = 1; i <= n; i ++){
        for (int j = 1; j <= m; j ++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}