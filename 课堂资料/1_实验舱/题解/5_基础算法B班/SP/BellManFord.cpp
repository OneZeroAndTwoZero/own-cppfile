#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;
struct Edge
{
    int u, v, w, next;
} e[100001];
int n, m, head[100001], dis[100001], u, v, w, pos, st, et;
void addEdge(int u, int v, int w)
{
    e[++pos] = {u, v, w, head[u]};
    head[u] = pos;
}
bool vis[100001];
void BellmanFord(int st)
{
    memset(dis, 0x3f, sizeof dis);
    dis[st] = 0;
    for (int i = 0; i < n - 1; i++)
        for (int j = 1; j <= pos; j++)
        {
            int u = e[j].u, v = e[j].v, w = e[j].w;
            dis[v] = min(dis[v], dis[u] + w);
        }
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("data/data1.in", "r", stdin);
    // freopen("data/data1.out", "w", stdout);
#endif
    cin >> n >> m >> st >> et;
    for (int i = 0; i < m; i++)
    {
        cin >> u >> v >> w;
        addEdge(u, v, w);
    }
    BellmanFord(st);
    return 0;
}