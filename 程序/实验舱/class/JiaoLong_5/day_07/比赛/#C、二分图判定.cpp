#include<bits/stdc++.h>
using namespace std;

int t,n,m,u,v;
vector<int> a[200005];
int co[200005] = {0};
bool vis[200005] = {0},ans;

void dfs(int u){
    vis[u] = 1;
    for(auto && i : a[u]){
        if(!vis[i]){
            if(co[u] == 1) co[i] = 0;
            else co[i] = 1;
            dfs(i);
        }else{
            if(co[i] == co[u]) ans = 0;
        }
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
    
    scanf("%d",&t);
    while(t --){
        scanf("%d %d",&n,&m);
        for(int i = 0;i <= n;i++){
            a[i].clear();
            co[i] = 0;
            vis[i] = 0;
        }
        for(int i = 0;i < m;i++){
            scanf("%d %d",&u,&v);
            a[u].push_back(v);
            a[v].push_back(u);
        }
        ans = 1;
        for(int i = 1;i <= n;i++) if(!vis[i]) dfs(i);
        if(ans) printf("Yes\n");
        else printf("No\n");
    }

    return 0;
}