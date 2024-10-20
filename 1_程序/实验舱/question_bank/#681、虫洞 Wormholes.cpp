#include<bits/stdc++.h>
using namespace std;

struct edge{
    int vi,wi;
};

int T;
int n,m,w;
int s,e,t;
vector<edge> a[505];
int dis[505],cnt[505];
bool vis[505];

void __init(){
    memset(dis,0x3f,sizeof(dis));
    memset(vis,0,sizeof(vis));
    memset(cnt,0,sizeof(cnt));
    for(int i = 0;i <= n;i ++){
        a[i].clear();
    }
}

bool spfa(int s){
    queue<int> q;
    q.push(s);
    vis[s] = 1;
    dis[s] = 0;
    while(q.size()){
        int x = q.front();
        // printf("%d;;\n",x);
        vis[x] = 0;
        q.pop();
        for(auto && i : a[x]){
            if(dis[i.vi] <= dis[x] + i.wi) continue;
            dis[i.vi] = dis[x] + i.wi;
            if(!vis[i.vi]){
                q.push(i.vi);
                vis[i.vi] = 1;
                cnt[i.vi] ++;
                if(cnt[i.vi] > n){
                    return 1;
                }
            }
        }
    }
    return 0;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d",&T);
    while(T --){
        scanf("%d %d %d",&n,&m,&w);
        __init();
        while(m --){
            scanf("%d %d %d",&s,&e,&t);
            a[s].push_back({e,t});
            a[e].push_back({s,t});
        }
        while(w --){
            scanf("%d %d %d",&s,&e,&t);
            a[s].push_back({e,-t});
        }
        if(spfa(1)) printf("YES\n");
        else printf("NO\n");
    }

    return 0;
}