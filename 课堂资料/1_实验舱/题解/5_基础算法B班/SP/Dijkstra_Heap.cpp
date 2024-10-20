#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;
struct Edge
{
    int u, v, w, next;
} e[200001];
struct node
{
    int dis, v;
    bool operator<(const node t) const
    {
        return t.dis < dis;
    }
};

int pos, head[200001], u, v, w, n, m, dis[200001];
bool vis[200001];
void addEdge(int u, int v, int w)
{
    e[++pos] = {u, v, w, head[u]};
    head[u] = pos;
}
void Dijkstra(int st)
{
    memset(dis, 0x3f, sizeof dis);
    memset(vis, false, sizeof vis);
    dis[st] = 0;
    priority_queue<node> q;
    q.push({0, st});
    while (!q.empty())
    {
        int u = q.top().v; //每次取出当前最短路长度最小的点
        q.pop();
        if (vis[u])
            continue;
        vis[u] = true;
        for (int i = head[u]; i; i = e[i].next) //以u为起点更新所有相连的点的最短路径长度
        {
            int v = e[i].v, w = e[i].w;
            if (dis[v] > dis[u] + w)
            {
                dis[v] = dis[u] + w;
                q.push({dis[v], v});
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
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> u >> v >> w;
        addEdge(u, v, w);
    }
    Dijkstra(1);
    cout << dis[n];
    return 0;
}