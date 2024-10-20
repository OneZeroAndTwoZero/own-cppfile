#include<bits/stdc++.h>
using namespace std;

struct node{
    int idx;
    int di;
    bool operator < (const node &a) const{
        return di < a.di;
    }
};

int n,m;
int u,v,w;
vector<node> a[100005];
int dis[100005] = {0};
bool vis[100005] = {0};

void dij(){
    priority_queue<node> q;
    q.push({1,0});
    while(q.size()){
        node tem = q.top();
        q.pop();
        if(vis[tem.idx]) continue;
        vis[tem.idx] = 1;
        // cout << tem.idx << "  " << tem.di << "\n";
        for(auto && i : a[tem.idx]){
            if(dis[tem.idx] + i.di < dis[i.idx]){
                dis[i.idx] = dis[tem.idx] + i.di;
                q.push({i.idx,dis[i.idx]});
            }
        }
    }
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d %d",&n,&m);
    while(m --){
        scanf("%d %d %d",&u,&v,&w);
        a[u].push_back({v,w});
        a[v].push_back({u,w});
    }
    memset(dis,0x3f,sizeof(dis));
    dis[1] = 0;
    dij();
    if(dis[n] == 0x3f3f3f3f)
        printf("%d\n",-1);
    else
        printf("%d\n",dis[n]);

	return 0;
}