#include<bits/stdc++.h>
using namespace std;

struct node{
    int vi,wi;
};

int n,m;
int u,v,k;
int x,y;
vector<node> a[100005];
int fa[100005];
int h[100005],d[100005];
int st[100005][25];

void erg(int idx,int dep,int step){
    //cout << idx << "[][]\n";
    h[idx] = dep;
    d[idx] = step;
    st[idx][0] = fa[idx];
    // __lg(h[idx]) 绝对不要 +1 (不知道为什么,就很神奇)
    for(int i = 1;i <= __lg(h[idx]);i ++){
        //cout << i << ";;[][]\n";
        st[idx][i] = st[st[idx][i - 1]][i - 1];
    }
    for(auto && i : a[idx]){
        if(i.vi == fa[idx]) continue;
        fa[i.vi] = idx;
        erg(i.vi,dep + 1,step + i.wi);
    }
}

int getlca(int x,int y){
    //cout << ";;;\n";
    if(h[x] < h[y]) swap(x,y);
    while(h[x] > h[y]){
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

int getans(int x,int y){
    int lca = getlca(x,y);
    return d[x] + d[y] - 2 * d[lca];
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d %d",&n,&m);
    for(int i = 1;i < n;i ++){
        scanf("%d %d %d",&u,&v,&k);
        a[u].push_back({v,k});
        a[v].push_back({u,k});
    }
    erg(1,0,0);
    while(m --){
        scanf("%d %d",&x,&y);
        printf("%d\n",getans(x,y));
    }

	return 0;
}