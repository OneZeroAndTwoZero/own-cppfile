#include<bits/stdc++.h>
using namespace std;

int n,m,cnt = 0;
int u,v;
bool vis[100005];
vector<int> a[100005];

void dfs(int u){
    vis[u] = 1;
    for(auto && i : a[u]){
        if(vis[i]) continue;
        dfs(i);
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
    for(int i = 0;i < m;i++){
        scanf("%d %d",&u,&v);
        a[u].push_back(v);
        a[v].push_back(u);
    }
    for(int i = 1;i <= n;i++){
        if(vis[i]) continue;
        dfs(i);
        cnt ++;
    }
    printf("%d\n",cnt);

    return 0;
}
