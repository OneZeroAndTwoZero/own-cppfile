#include<bits/stdc++.h>
using namespace std;

int n1,n2,n,m,ansleft,ansright;
int u,v;
int dis[300005];
bool vis[300005];
vector<int> a[300005];

void bfs(int st){
    queue<int> q;
    q.push(st);
    vis[st] = 1;
    while(q.size()){
        int t = q.front();
        q.pop();
        for(auto && i : a[t]){
            if(vis[i]) continue;
            vis[i] = 1;
            dis[i] = dis[t] + 1;
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

    scanf("%d %d %d",&n1,&n2,&m);
    n = n1 + n2;
    for(int i = 2;i < n;i ++){
        dis[i] = 0x3f3f3f3f;
    }
    while(m --){
        scanf("%d %d",&u,&v);
        a[u].push_back(v);
        a[v].push_back(u);
    }
    bfs(1);
    bfs(n);
    for(int i = 1;i <= n1;i ++){
        ansleft = max(ansleft,dis[i]);
    }
    for(int i = n1 + 1;i <= n;i ++){
        ansright = max(ansright,dis[i]);
    }
    printf("%lld\n",ansleft + ansright + 1);

    return 0;
}