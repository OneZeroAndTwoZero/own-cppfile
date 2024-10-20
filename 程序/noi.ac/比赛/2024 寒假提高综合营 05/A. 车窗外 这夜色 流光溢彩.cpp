#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

int n,m,t,maxn;
int u,v;
bool vis[1000005];
int cnt[1000005];
long long dp[1000005];
int fa[1000005];
int h[1000005];
vector<int> a[1000005];

void erg(int u,int dep){
    h[u] = dep;
    if(vis[u]){
        cnt[u] = 1;
        maxn = max(maxn,dep);
    }
    for(auto && i : a[u]){
        if(i == fa[u]) continue;
        fa[i] = u;
        erg(i,dep + 1);
        cnt[u] += cnt[i];
    }
}

void dfs(int u){
    for(auto && i : a[u]){
        if(i == fa[u]) continue;
        dfs(i);
        dp[u] += dp[i];
        if(cnt[i] == 0) continue;
        dp[u] += 2;
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
    for(int i = 1;i <= m;i ++){
        scanf("%d",&t);
        vis[t] = 1;
    }
    for(int i = 1;i < n;i ++){
        scanf("%d %d",&u,&v);
        a[u].push_back(v);
        a[v].push_back(u);
    }
    erg(1,0);
    dfs(1);
    printf("%lld\n",dp[1] - maxn);

    return 0;
}