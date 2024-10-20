#include<bits/stdc++.h>
using namespace std;

struct node{
    int idx,val;
    bool operator < (const node &a) const{
        return val > a.val;
    }
};

int n,m,ans = 0;
int u,v,w;
vector<node> a[1005];
int dis[1005];
bool vis[1005];

void prim(){
    priority_queue<node> q;
    q.push({1,0});
    int cnt = 0;
    dis[1] = 0;
    while(q.size()){
        node t = q.top();
        q.pop();
        if(vis[t.idx]) continue;
        vis[t.idx] = 1;
        cnt ++,ans += dis[t.idx];
        for(auto && i : a[t.idx]){
            if(vis[i.idx] || i.val >= dis[i.idx]) continue;
            dis[i.idx] = i.val;
            q.push({i.idx,dis[i.idx]});
        }
    }
    if(cnt != n){
        printf("impossible\n");
        exit(0);
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
        scanf("%d %d %d",&u,&v,&w);
        a[u].push_back({v,w});
        a[v].push_back({u,w});
    }
    for(int i = 1;i <= n;i ++){
        dis[i] = 0x3f3f3f3f;
    }
    prim();
    printf("%d\n",ans);

    return 0;
}