#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

int n,m;
int op[300005],x[300005],y[300005];
unordered_map<int,int> add[100005];
int f[100005];
int val[100005],tmp[100005];
int h[100005];
int addtime[100005];

int find(int x){
    if(f[x] == x) return x;
    return find(f[x]);
}

void merge(int x,int y,int t){
    int fx = find(x),fy = find(y);
    if(h[fx] < h[fy]) swap(fx,fy);
    f[fy] = fx;
    tmp[fy] += val[fx];
    addtime[fy] = t;
    if(h[fx] == h[fy]) h[fx] ++;
}

int getlca(int x,int y){
    unordered_map<int,int> vis;
    while(1){
        vis[x] = 1;
        if(x == f[x]) break;
        x = f[x];
    }
    while(1){
        if(vis[y]) return y;
        if(y == f[y]) break;
        y = f[y];
    }
    return -1;
}

int operate(int x,int y){
    int lca = getlca(x,y);
    int res = 0,temlca = lca;
    while(1){
        res += val[lca] - tmp[lca];
        if(f[lca] == lca) break;
        lca = f[lca];
    }
    while(x != temlca && f[x] != temlca){
        x = f[x];
    }
    while(y != temlca && f[y] != temlca){
        y = f[y];
    }
    if(x == temlca){
        res -= tmp[y];
    }else if(y == temlca){
        res -= tmp[x];
    }else if(addtime[x] > addtime[y]){ // the laster one
        res -= tmp[x];
    }else{
        res -= tmp[y];
    }
    return res;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %d",&n,&m);
    for(int i = 1;i <= n;i ++){
        f[i] = i;
        h[i] = 1;
    }
    for(int i = 0;i < m;i ++){
        scanf("%d %d",&op[i],&x[i]);
        if(op[i] == 1 || op[i] == 3) scanf("%d",&y[i]);
        if(op[i] == 1){
            add[x[i]][y[i]] ++;
            add[y[i]][x[i]] ++;
            if(find(x[i]) == find(y[i])) continue;
            merge(x[i],y[i],i);
        }else if(op[i] == 2){
            val[find(x[i])] ++;
        }else{
            if(find(x[i]) != find(y[i])){
                printf("0\n");
                continue;
            }
            printf("%d\n",operate(x[i],y[i]) + add[x[i]][y[i]]);
        }
    }

    return 0;
}