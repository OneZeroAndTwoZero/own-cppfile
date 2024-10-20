#include<bits/stdc++.h>
using namespace std;

int n,k,ans = 0;
int x,y;
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

    scanf("%d %d",&n,&k);
    for(int i = 0;i < k;i ++){
        scanf("%d %d",&x,&y);
        a[x].push_back(y);
    }
    for(int i = 1;i <= n;i ++){
        for(int j = 1;j <= n;j ++){
            vis[j] = 0;
        }
        if(match(i)) ans ++;
    }
    printf("%d\n",ans);

    return 0;
}