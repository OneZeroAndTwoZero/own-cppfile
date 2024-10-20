#include<bits/stdc++.h>
using namespace std;

int n,m,ans = 0;
int a,b;
int t[15] = {0},num[15] = {0};
bool vis[105] = {0};
int f[15][15] = {0};

int check(){
    int res = 0;
    for(int i = 1;i < n;i ++)
        res += f[t[i]][t[i - 1]] | f[t[i - 1]][t[i]];
    return res;
}

void dfs(int k){
    if(k == n){
        int tem = check();
        if(tem > ans){
            ans = tem;
            for(int i = 0;i < n;i ++) num[i] = t[i];
        }
        return;
    }
    for(int i = 1;i <= n;i ++){
        if(vis[i]) continue;
        vis[i] = 1,t[k] = i;
        dfs(k + 1);
        vis[i] = 0;
    }
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d %d",&n,&m);
    while(m --){
        scanf("%d %d",&a,&b);
        f[a][b] = f[b][a] = 1;
    }
    dfs(0);
    printf("%d\n",ans);
    for(int i = 0;i < n;i ++)
        printf("%d%c",num[i]," \n"[i == n - 1]);

	return 0;
}