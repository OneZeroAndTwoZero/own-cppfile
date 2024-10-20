#include<bits/stdc++.h>
using namespace std;

struct edge{
    int u, v, nxt;
};

struct node{
    int idx, val;
    bool operator < (const node &a) const{
        return val > a.val;
    }
};

int n1, n2, m, u, v, cid = 0;
int dis[300005];
edge e[1000006];
int head[300005];
bool vis[300005];

void add(int u, int v){
    e[++ cid] = {u, v, head[u]};
    head[u] = cid;
}

int dijkstra(int s){
    priority_queue<node> q;
    dis[s] = 0, q.push({s, 0});
    int res = 0;
    while (q.size()){
        node x = q.top();
        res = max(res, dis[x.idx]);
        q.pop();
        if (vis[x.idx]) continue;
        vis[x.idx] = 1;
        for (int i = head[x.idx]; i; i = e[i].nxt){
            if (dis[e[i].v] <= dis[e[i].u] + 1) continue;
            dis[e[i].v] = dis[e[i].u] + 1;
            q.push({e[i].v, dis[e[i].v]});
        }
    }
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

    scanf("%d %d %d", &n1, &n2, &m);
    memset(dis, 0x3f, sizeof(dis));
    while (m --){
        scanf("%d %d", &u, &v);
        add(u, v);
        add(v, u);
    }
    printf("%d\n", dijkstra(1) + dijkstra(n1 + n2) + 1);

    return 0;
}