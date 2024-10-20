#include<bits/stdc++.h>
using namespace std;

struct node{
    int vi,ti;
};

int n,m,ans = 0x3f3f3f3f;
int u,v,t;
int addt[300005];
int d[300005];
int h[300005];
int fa[300005];
int st[300005][25];
int cnt[300005];
vector<node> a[300005];
unordered_map<long long,int> f;

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

void erg(int u,int dep,int di){
    h[u] = dep;
    d[u] = di;
    st[u][0] = fa[u];
    for(int i = 1;i <= __lg(dep);i ++){
        st[u][i] = st[st[u][i - 1]][i - 1];
    }
    for(auto && i : a[u]){
        if(i.vi == fa[u]) continue;
        fa[i.vi] = u;
        // cout << u << " " << i.vi << " ;; " << i.ti << "\n";
        addt[i.vi] = i.ti;
        erg(i.vi,dep + 1,di + i.ti);
    }
}

void solve1(){
    for(int i = 1;i < n;i ++){
        scanf("%d %d %d",&u,&v,&t);
        a[u].push_back({v,t});
        a[v].push_back({u,t});
    }
    erg(1,1,0);
    for(int k = 0;k < m;k ++){
        scanf("%d %d",&u,&v);
        int lca = getlca(u,v);
        int dir = d[u] + d[v] - 2 * d[lca];
        cnt[k] = dir;
        // cout << k << " " << cnt[k] << ";;\n";
        for(int i = u;i != lca;i = fa[i]){
            f[i * 1000000LL + k] = 1;
        }
        for(int i = v;i != lca;i = fa[i]){
            f[i * 1000000LL + k] = 1;
        }
    }
    // for(int i = 2;i <= n;i ++){
    //     cout << i << " " << addt[i] << "[]\n";
    // }
    for(int i = 2;i <= n;i ++){
        int res = 0;
        for(int j = 0;j < m;j ++){
            if(f[i * 1000000LL + j]){
                res = max(res,cnt[j] - addt[i]);
                // cout << cnt[j] - addt[i] << " ";
            }else{
                res = max(res,cnt[j]);
                // cout << cnt[j] << " ";
            }
        }
        ans = min(ans,res);
        // cout << "\n";
    }
    printf("%d\n",ans);
}

void solve2(){
    for(int i = 1;i < n;i ++){
        scanf("%d %d %d",&u,&v,&t);
        if(u > v) swap(u,v);
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

    scanf("%d %d",&n,&m);
    if((long long)n * m <= 10000000){
        solve1();
    }else{
        solve2();
    }

    return 0;
}