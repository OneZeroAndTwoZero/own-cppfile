#include<bits/stdc++.h>
using namespace std;

int n,k,m,st,ans = 0;
int u,v;
vector<int> a[100005];
int q[100005];
bool vis[100005];
int deep[100005];

void bfs(){
    int l = 0,r = 0;
    q[r ++] = st,vis[st] = 1,deep[st] = 1;
    while(l < r){
        int t = q[l ++];
        ans = max(ans,deep[t]);
        for(auto && i : a[t]){
            if(vis[i]) continue;
            vis[i] = 1,deep[i] = deep[t] + 1,q[r ++] = i;
        }
    }
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d %d %d",&n,&k,&st);
    scanf("%d",&m);
    while(k --){
        scanf("%d %d",&u,&v);
        a[u].push_back(v);
        a[v].push_back(u);
    }
    bfs();
    printf("%d\n",ans + m);

	return 0;
}