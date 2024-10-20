#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;
struct Edge
{
    int u, v, w, next;
} e[100001];
int n, m, k, head[100001], dis[100001], pos, u, v, w;
bool vis[100001];
void addEdge(int u, int v, int w)
{
    e[++pos] = {u, v, w, head[u]};
    head[u] = pos;
}
void SPFA(int s)
{
    memset(vis, false, sizeof vis);
    memset(dis, 0x3f, sizeof dis);
    dis[s] = 0;
    queue<int> q;
    q.push(s);
    while (q.size())
    {
        int u = q.front();
        q.pop();
        vis[u] = false;
        for (int i = head[u]; i; i = e[i].next)
        {
            int v = e[i].v, w = e[i].w;
            if (dis[v] > dis[u] + w)
            {
                dis[v] = dis[u] + w;
                if (!vis[v])
                    vis[v] = true, q.push(v);
            }
        }
    }
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("data/data1.in", "r", stdin);
// freopen("data/data1.out", "w", stdout);
#endif
    scanf("%d%d", &n, &m);
    for (int i = 0; i < m; i++)
    {
        scanf("%d%d%d", &u, &v, &w);
        addEdge(u, v, w);
        addEdge(v, u, w);
    }
    SPFA(1);
    printf("%d", dis[n]);
    return 0;
}