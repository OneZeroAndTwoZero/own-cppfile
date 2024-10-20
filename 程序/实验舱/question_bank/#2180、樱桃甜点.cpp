#include<bits/stdc++.h>
using namespace std;

int n,m,cnt = 0,ans;
bool vis[100005];
int u,v;
vector<int> a[100005];

void dfs(int u){
    for(auto && i : a[u]){
        if(vis[i]) continue;
        ans ++,vis[i] = 1;
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
    while(m --){
        scanf("%d %d",&u,&v);
        a[u].push_back(v);
        a[v].push_back(u);
    }
    for(int i = 1;i <= n;i ++){
        if(vis[i]) continue;
        vis[i] = 1,cnt ++;
        dfs(i);
        
    }
    printf("%d\n",ans + (cnt - 1) * 2);

    return 0;
}