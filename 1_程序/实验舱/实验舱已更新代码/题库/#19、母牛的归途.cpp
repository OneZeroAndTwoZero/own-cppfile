#include<bits/stdc++.h>
using namespace std;

struct node{
    int idx;
    long long d;
    
    bool operator > (const node &a) const{
        return d < a.d;
    }
};

struct side{
    int v,w;
};

int n,m;
int u,v,w;
priority_queue<node,vector<node>,greater<node> > q;
vector<side> a[100005];
long long dis[100005] = {0};
bool vis[100005] = {0};

void dij(int n,int m){
    dis[n] = 0;
    q.push({n,0});
    while(q.size()){
        node t = q.top();
        q.pop();
        if(!vis[t.idx]){
            vis[t.idx] = 1;
            for(auto && i : a[t.idx]){
                if(dis[i.v] > dis[t.idx] + i.w){
                    dis[i.v] = dis[t.idx] + i.w;
                    q.push({i.v,dis[i.v]});
                }
            }
        }
    }
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

    scanf("%d %d",&n,&m);
    for(int i = 0;i <= n;i ++){
        dis[i] = 0x3f3f3f3f3f3f3f3f;
    }
    for(int i = 0;i < m;i ++){
        scanf("%d %d %d",&u,&v,&w);
        a[u].push_back({v,w});
        a[v].push_back({u,w});
    }
    dij(1,n);
    if(dis[m] != 0x3f3f3f3f3f3f3f3f){
        printf("%lld\n",dis[m]);
    }else{
        printf("-1\n");
    }

	return 0;
}
