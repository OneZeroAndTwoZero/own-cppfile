#include<bits/stdc++.h>
using namespace std;

int n,m,pos = 1,cid;
long long sum,ans = 1,mod = 1000000007;
int u,v;
vector<int> a[100005];
stack<int> s;
int w[100005];
int dfn[100005],low[100005];
bool vis[100005];
int scc[100005];
int minn[100005];
int cnt[100005];

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
    minn[cid] = 0x3f3f3f3f;
    while(1){
        int t = s.top();
        s.pop();
        scc[t] = cid;
        if(w[t] < minn[cid]){
            cnt[cid] = 1;
            minn[cid] = w[t];
        }else if(w[t] == minn[cid]){
            cnt[cid] ++;
        }
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
        scanf("%d",&w[i]);
    }
    scanf("%d",&m);
    while(m --){
        scanf("%d %d",&u,&v);
        a[u].push_back(v);
    }
    for(int i = 1;i <= n;i ++){
        if(dfn[i]) continue;
        tarjan(i);
    }
    for(int i = 1;i <= cid;i ++){
        ans = (ans * cnt[i]) % mod;
        sum += minn[i];
    }
    printf("%lld %lld\n",sum,ans);

    return 0;
}
