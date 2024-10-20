#include<bits/stdc++.h>
using namespace std;

int n,m,ans = 0x3f3f3f3f;
int u,v;
int s = 1,t1,t2,l1,l2;
int dis[3005];
int d[3005][3005];
bool vis[3005];
vector<int> a[3005];

void bfs(int st){
    vis[st] = 1,dis[st] = 0;
    queue<int> q;
    q.push(st);
    while(q.size()){
        int t = q.front();
        q.pop();
        for(auto && i : a[t]){
            if(vis[i]) continue;
            vis[i] = 1,dis[i] = dis[t] + 1;
            q.push(i);
        }
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

    scanf("%d %d",&n,&m);
    for(int i = 0;i < m;i ++){
        scanf("%d %d",&u,&v);
        a[u].push_back(v);
        a[v].push_back(u);
    }
    scanf("%d %d",&t1,&l1);
    scanf("%d %d",&t2,&l2);
    for(int i = 1;i <= n;i ++){
        memset(dis,0x3f,sizeof(dis));
        memset(vis,0,sizeof(vis));
        bfs(i);
        for(int j = 1;j <= n;j ++){
            d[i][j] = dis[j];
        }
    }
    if(d[s][t1] > l1 || d[s][t2] > l2){
        printf("-1\n");
        return 0;
    }
    ans = d[s][t1] + d[s][t2];
    for(int pos = 1;pos <= n;pos ++){
        if(d[s][pos] + d[pos][t1] > l1) continue;
        if(d[s][pos] + d[pos][t2] > l2) continue;
        ans = min(ans,d[s][pos] + d[pos][t1] + d[pos][t2]);
    }
    ans = m - ans;
    printf("%lld\n",ans);

    return 0;
}