#include<bits/stdc++.h>
using namespace std;

int n,q,vi,ki;
int u,v;
int x[300005];
bool vis[300005] = {0};
vector<int> a[300005];
vector<int> son[300005];
int num[300005] = {0};
int ans[300005][55] = {0};
int pos[300005] = {0};

int build(int u){
    num[u] = 1;
    for(auto && i : a[u]){
        if(vis[i]) continue;
        vis[i] = 1;
        son[u].push_back(i);
        num[u] += build(i);
    }
    return num[u];
}

void dfs(int u){
    bool p = 1;
    for(auto && j : son[u]) dfs(j);
    for(int i = 1;i <= min(num[u],20);i ++){
        int max_ = 0,maxi;
        for(auto && j : son[u])
            if(pos[j] == num[j] + 1) continue;
            else if(ans[j][pos[j]] > max_){
                max_ = ans[j][pos[j]];
                maxi = j;
            }
        if(p && x[u] > max_){
            p = 0;
            ans[u][i] = x[u];
        }else{
            ans[u][i] = ans[maxi][pos[maxi]];
            pos[maxi] ++;
        }
    }
}

int main(){
// #ifndef ONLINE_JUDGE
//     freopen("data.in","r",stdin);
//     freopen("data.out","w",stdout);
// #endif

    scanf("%d %d",&n,&q);
    for(int i = 1;i <= n;i ++){
        scanf("%d",&x[i]);
        pos[i] = 1;
    }
    for(int i = 1;i < n;i ++){
        scanf("%d %d",&u,&v);
        a[u].push_back(v);
        a[v].push_back(u);
    }
    vis[1] = 1;
    build(1);
    dfs(1);
    while(q --){
        scanf("%d %d",&vi,&ki);
        if(ki > num[vi])
            printf("-1\n");
        else
            printf("%d\n",ans[vi][ki]);
    }

	return 0;
}