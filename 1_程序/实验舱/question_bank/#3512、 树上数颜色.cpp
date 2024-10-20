#include<bits/stdc++.h>
using namespace std;

int n,m;
int dfspos = 0,cnt = 0;
int u,v;
vector<int> a[1000006];
int col[1000006];
int ans[1000006];
int fa[1000006];
int son[1000006];
int size[1000006];
int dfn[1000006],rnk[1000006];
int l[1000006],r[1000006];
int num[1000006];

void add(int x){
    if(!num[col[x]]){
        cnt ++;
    }
    num[col[x]] ++;
}

void del(int x){
    num[col[x]] --;
    if(!num[col[x]]){
        cnt --;
    }
}

void erg(int u){
    dfn[u] = l[u] = ++dfspos;
    rnk[dfspos] = u;
    son[u] = -1;
    size[u] = 1;
    int len = a[u].size();
    for(int i = 0;i < len;i ++){
        if(a[u][i] == fa[u]) continue;
        fa[a[u][i]] = u;
        erg(a[u][i]);
        size[u] += size[a[u][i]];
        if(son[u] == -1 || size[a[u][i]] > size[son[u]]){
            son[u] = a[u][i];
        }
    }
    r[u] = dfspos;
}

void dfs(int u,bool is_del){
    int len = a[u].size();
    for(int i = 0;i < len;i ++){
        if(son[u] == a[u][i] || fa[u] == a[u][i]) continue;
        dfs(a[u][i],1);
    }
    if(son[u] != -1){
        dfs(son[u],0);
    }
    for(int i = 0;i < len;i ++){
        if(son[u] == a[u][i] || fa[u] == a[u][i]) continue;
        for(int j = l[a[u][i]];j <= r[a[u][i]];j ++){
            add(rnk[j]);
        }
    }
    add(u);
    ans[u] = cnt;
    if(!is_del) return;
    for(int i = l[u];i <= r[u];i ++){
        del(rnk[i]);
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
    
    scanf("%d",&n);
    for(int i = 1;i < n;i ++){
        scanf("%d %d",&u,&v);
        a[u].push_back(v);
        a[v].push_back(u);
    }
    for(int i = 1;i <= n;i ++){
        scanf("%d",&col[i]);
    }
    erg(1);
    dfs(1,0);
    scanf("%d",&m);
    while(m --){
        scanf("%d",&u);
        printf("%d\n",ans[u]);
    }

    return 0;
}
