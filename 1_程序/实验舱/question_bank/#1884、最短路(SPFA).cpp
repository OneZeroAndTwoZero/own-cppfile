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

void spfa(int st){
    queue<int> q;
    q.push(st);
    vis[st] = 1;
    while(q.size()){
        int x = q.front();
        vis[x] = 0;
        q.pop();
        for(auto && i : a[x]){
            if(dis[i.vi] <= dis[x] + i.wi) continue;
            dis[i.vi] = dis[x] + i.wi;
            if(vis[i.vi]) continue;
            q.push(i.vi);
            vis[i.vi] = 1;
        }
    }
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d %d",&n,&m);
    for(int i = 2;i <= n;i ++){
        dis[i] = 0x3f3f3f3f;
    }
    while(m --){
        scanf("%d %d %d",&u,&v,&w);
        a[u].push_back({v,w});
        a[v].push_back({u,w});
    }
    spfa(1);
    printf("%d\n",dis[n]);

    return 0;
}