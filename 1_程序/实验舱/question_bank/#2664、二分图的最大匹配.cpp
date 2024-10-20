#include<bits/stdc++.h>
using namespace std;

int n1,n2,m,ans = 0;
int u,v;
bool vis[505];
int point[505];
vector<int> a[505];

bool match(int u){
    if(vis[u]) return 0;
    vis[u] = 1;
    for(auto && i : a[u]){
        if(!point[i] || match(point[i])){
            point[i] = u;
            return 1;
        }
    }
    return 0;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %d %d",&n1,&n2,&m);
    for(int i = 0;i < m;i ++){
        scanf("%d %d",&u,&v);
        a[u].push_back(v);
    }
    for(int i = 1;i <= n1;i ++){
        for(int j = 1;j <= n1;j ++){
            vis[j] = 0;
        }
        if(match(i)) ans ++;
    }
    printf("%d\n",ans);

    return 0;
}
