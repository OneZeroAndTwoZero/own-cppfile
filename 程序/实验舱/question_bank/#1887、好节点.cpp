#include<bits/stdc++.h>
using namespace std;

int n,k,t,st,ans = 0;
int val[100005];
vector<int> a[100005];
bool vis[100005];

void dfs(int u,int maxn){
    if(val[u] >= maxn) ans ++;
    maxn = max(maxn,val[u]);
    for(auto && i : a[u]){
        dfs(i,maxn);
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
        scanf("%d",&val[i]);
    }
    for(int i = 1;i <= n;i ++){
        scanf("%d",&k);
        while(k --){
            scanf("%d",&t);
            a[i].push_back(t);
            vis[t] = 1;
        }
    }
    for(int i = 1;i <= n;i ++){
        if(!vis[i]){
            st = i;
        }
    }
    dfs(st,-0x3f3f3f3f);
    printf("%d\n",ans);

    return 0;
}