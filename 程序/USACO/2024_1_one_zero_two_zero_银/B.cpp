#include<bits/stdc++.h>
using namespace std;

int n,num = 0;
int u,v;
int p[100005];
vector<int> a[100005];
int fa[100005];
bool vis[100005];
int size[100005];
unordered_map<int,int> f;
int dp[100005];

void erg(int u){
    for(auto && i : a[u]){
        if(i == fa[u]) continue;
        fa[i] = u;
        erg(i);
        size[u] += size[i];
    }
    if(size[u] == 0){
        vis[u] = 1,num ++;
        size[u] = 1;
    }
}

void dfs(int u){
    if(vis[u]){
        if(f[u]) dp[u] = 1;
        return;
    }
    for(auto && i : a[u]){
        if(i == fa[u]) continue;
        dfs(i);
        dp[u] += dp[i];
    }
    dp[u] = min(dp[u] + f[u],size[u]);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d",&n);
    for(int i = 1;i <= n;i ++){
        scanf("%d",&p[i]);
    }
    for(int i = 1;i < n;i ++){
        scanf("%d %d",&u,&v);
        a[u].push_back(v);
        a[v].push_back(u);
    }
    erg(1);
    for(int i = 1;i <= num;i ++){
        f[p[i]] = 1;
    }
    dfs(1);
    printf("%d\n",dp[1]);

    return 0;
}