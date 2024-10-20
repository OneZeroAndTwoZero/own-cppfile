#include<bits/stdc++.h>
using namespace std;

struct node{
    int vi,wi;
};

int n,m;
int u,v,w;
vector<node> a[100005];
int dis[100005];
bool vis[100005];
int cnt[100005];

bool spfa(int s){
    queue<int> q;
    q.push(s);
    vis[s] = 1;
    dis[s] = 0;
    while(q.size()){
        int x = q.front();
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

    scanf("%d %d",&n,&m);
    for(int i = 1;i <= n;i ++){
        a[0].push_back({i,0});
        dis[i] = 0x3f3f3f3f;
    }
    while(m --){
        scanf("%d %d %d",&u,&v,&w);
        a[v].push_back({u,w});
    }
    if(spfa(0)){
        printf("NO\n");
        return 0;
    }
    for(int i = 1;i <= n;i ++){
        printf("%d%c",dis[i]," \n"[i == n]);
    }

    return 0;
}