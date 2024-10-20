#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;
int n, m, dis[1001][1001], u, v, w, s, e;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("data/data1.in", "r", stdin);
    // freopen("data/data1.out", "w", stdout);
#endif
    cin >> n >> m >> s >> e;
    memset(dis, 0x3f, sizeof(dis));
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> dis[i][j];
    for (int k = 1; k <= n; k++)
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= m; j++)
                dis[i][j] = min(dis[i][j], dis[i][k] + dis[k][j]);
    cout << dis[s][e];
    return 0;
}