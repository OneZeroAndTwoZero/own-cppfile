#include<bits/stdc++.h>
using namespace std;

int n,t,x,y;
int val[200005];
int fa[200005];
int h[200005];
int st[200005][25];
vector<int> a[200005];

void erg(int u,int dep){
    h[u] = dep;
    st[u][0] = fa[u];
    for(int i = 1;i <= __lg(dep);i ++){
        st[u][i] = st[st[u][i - 1]][i - 1];
    }
    for(auto && i : a[u]){
        if(i == fa[u]) continue;
        fa[i] = u;
        val[i] += val[u];
        erg(i,dep + 1);
    }
}

int getlca(int x,int y){
    if(h[y] > h[x]) swap(x,y);
    while(h[x] > h[y]){
        x = st[x][__lg(h[x] - h[y])];
    }
    if(x == y) return x;
    for(int i = __lg(h[x]) + 1;i >= 0;i --){
        if(st[x][i] != st[y][i]){
            x = st[x][i];
            y = st[y][i];
        }
    }
    return st[y][0];
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d %d",&n,&t);
    for(int i = 1;i <= n;i ++){
        scanf("%d",&val[i]);
    }
    for(int i = 1;i < n;i ++){
        scanf("%d %d",&x,&y);
        a[x].push_back(y);
        a[y].push_back(x);
    }
    erg(1,1);
    while(t --){
        scanf("%d %d",&x,&y);
        printf("%d\n",val[getlca(x,y)]);
    }

	return 0;
}