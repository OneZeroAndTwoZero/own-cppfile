#include<bits/stdc++.h>
using namespace std;

struct node{
    int vi,wi;
};

int n,ans = 0;
int u,v,m;
vector<node> a[300005];
int fa[300005] = {0};
int dp[300005] = {0};
int max_[300005] = {0};

void dfs(int u){
    int maxn = 0,next = 0;
    for(auto && i : a[u]){
        if(i.vi == fa[u]) continue;
        fa[i.vi] = u;
        dfs(i.vi);
        if(i.wi + max_[i.vi] >= maxn){
            next = maxn;
            maxn = i.wi + max_[i.vi];
        }else if(i.wi + max_[i.vi] >= next){
            next = i.wi + max_[i.vi];
        }
    }
    dp[u] = maxn + next;
    max_[u] = maxn;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

    scanf("%d",&n);
    for(int i = 1;i < n;i ++){
        scanf("%d %d %d",&u,&v,&m);
        a[u].push_back({v,m});
        a[v].push_back({u,m});
    }
    dfs(1);
    for(int i = 1;i <= n;i ++){
        ans = max(ans,dp[i]);
    }
    printf("%d\n",ans);

	return 0;
}