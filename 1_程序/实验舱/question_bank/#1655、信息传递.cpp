#include<bits/stdc++.h>
using namespace std;

int n,tem,pos = 1,cid,ans = 0x3f3f3f3f;
vector<int> a[200005];
stack<int> s;
int dfn[200005],low[200005];
bool vis[200005];
int scc[200005];
int size[200005];

void tarjan(int u){
    dfn[u] = low[u] = pos ++;
    s.push(u);
    vis[u] = 1;
    for(auto && i : a[u]){
        if(!dfn[i]){
            tarjan(i);
            low[u] = min(low[i],low[u]);
        }else if(vis[i]){
            low[u] = min(low[u],dfn[i]);
        }
    }
    if(low[u] != dfn[u]) return;
    cid ++;
    while(1){
        int t = s.top();
        s.pop();
        scc[t] = cid;
        size[cid] ++;
        vis[t] = 0;
        if(t == u) break;
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

    scanf("%d",&n);
    for(int i = 1;i <= n;i ++){
        scanf("%d",&tem);
        a[i].push_back(tem);
    }
    for(int i = 1;i <= n;i ++){
        if(dfn[i]) continue;
        tarjan(i);
    }
    for(int i = 1;i <= cid;i ++){
        if(size[i] == 1) continue;
        ans = min(ans,size[i]);
    }
    printf("%d\n",ans);

    return 0;
}
