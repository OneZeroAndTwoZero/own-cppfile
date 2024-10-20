#include<bits/stdc++.h>
using namespace std;

int n,u,v;
long long num[2];
vector<int> a[1000005];
bool vis[1000005];

void dfs(int u,int deep){
    num[deep & 1] ++;
    for(auto && i : a[u]){
        if(vis[i]) continue;
        vis[i] = 1;
        dfs(i,deep + 1);
    }
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d",&n);
    for(int i = 1;i < n;i ++){
        scanf("%d %d",&u,&v);
        a[u].push_back(v);
        a[v].push_back(u);
    }
    vis[1] = 1;
    dfs(1,0);
    printf("%lld\n",num[0] * num[1] - (n - 1));

	return 0;
}