#include<bits/stdc++.h>
using namespace std;

int n,u,v;
vector<int> a[300005];
int order[300005];
int fa[300005];
int h[300005];
int st[300005][25];
int val[300005];

void erg(int u,int dep){
    h[u] = dep;
    st[u][0] = fa[u];
    for(int i = 1;i <= __lg(dep);i ++){
        st[u][i] = st[st[u][i - 1]][i - 1];
    }
    for(auto && i : a[u]){
        if(i == fa[u]) continue;
        fa[i] = u;
        erg(i,dep + 1);
    }
}

int getlca(int x,int y){
    if(h[y] > h[x]) swap(x,y);
    while(h[x] != h[y]){
        x = st[x][__lg(h[x] - h[y])];
    }
    if(x == y) return x;
    for(int i = __lg(h[x]);i >= 0;i --){
        if(st[x][i] != st[y][i]){
            x = st[x][i];
            y = st[y][i];
        }
    }
    return st[x][0];
}

void build(int u){
    for(auto && i : a[u]){
        if(i == fa[u]) continue;
        build(i);
        val[u] += val[i];
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
    for(int i = 0;i < n;i ++){
        scanf("%d",&order[i]);
    }
    for(int i = 1;i < n;i ++){
        scanf("%d %d",&u,&v);
        a[u].push_back(v),a[v].push_back(u);
    }
    erg(1,1);
    for(int i = 1;i < n;i ++){
        u = order[i - 1],v = order[i];
        val[u] ++,val[v] ++;
        int lca = getlca(u,v);
        val[lca] --,val[st[lca][0]] --;
    }
    build(1);
    for(int i = 1;i < n;i ++){
        val[order[i]] --;
    }
    for(int i = 1;i <= n;i ++){
        printf("%d\n",val[i]);
    }

    return 0;
}