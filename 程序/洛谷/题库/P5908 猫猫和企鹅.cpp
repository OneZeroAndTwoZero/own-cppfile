#include<bits/stdc++.h>
using namespace std;

int n,d,ans = -1;
int u,v;
bool vis[100005] = {0};
vector<int> a[100005];

void dfs(int x,int st){
    if(st > d) return;
    ans ++;
    for(auto && i : a[x]){
        if(!vis[i]){
            vis[i] = 1;
            dfs(i,st + 1);
        }
    }
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

    scanf("%d %d",&n,&d);
    for(int i = 0;i < n - 1;i ++){
        scanf("%d %d",&u,&v);
        a[u].push_back(v);
        a[v].push_back(u);
    }
    vis[1] = 1;
    dfs(1,0);
    printf("%d\n",ans);

	return 0;
}
