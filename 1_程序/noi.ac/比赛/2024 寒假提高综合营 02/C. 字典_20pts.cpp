#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

struct node{
    int pos,val;
    bool operator < (const node &a) const{
        return val > a.val;
    }
};

int n,q,pos1;
int u,v;
int a[200005];
vector<int> e[200005];
vector<int> son[200005];
int fa[200005];
int size[200005];
int st[200005][25];
int h[200005];
node val[200005];

void erg(int u,int dep){
    h[u] = dep;
    st[u][0] = fa[u];
    for(int i = 1;(1 << i) <= h[u];i ++){
        st[u][i] = st[st[u][i - 1]][i - 1];
    }
    for(auto && i : e[u]){
        if(fa[u] == i) continue;
        fa[i] = u;
        erg(i,dep + 1);
        size[u] += size[i];
    }
    size[u] ++;
}

int getans(int x,int y){
    if(h[x] < h[y]){
        swap(x,y);
    }
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
    return st[x][0];
}

void dfs(int f,int u){
    son[f].push_back(a[u]);
    for(auto && i : e[u]){
        if(i == fa[u]) continue;
        dfs(f,i);
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

    scanf("%d %d",&n,&q);
    for(int i = 1;i <= n;i ++){
        scanf("%d",&a[i]);
        if(a[i] == 1) pos1 = i;
    }
    for(int i = 1;i < n;i ++){
        scanf("%d %d",&u,&v);
        e[u].push_back(v);
        e[v].push_back(u);
    }
    erg(1,1);
    if(n <= 200 && q <= 200){
        while(q --){
            scanf("%d %d",&u,&v);
            swap(a[u],a[v]);
            for(int i = 1;i <= n;i ++){
                son[i].clear();
                dfs(i,i);
                sort(son[i].begin(),son[i].end());
            }
            vector<int> minn;
            minn.push_back(1000000001);
            for(int i = 1;i <= n;i ++){
                bool is_swap = 0;
                for(int j = 0;j < max(minn.size(),son[i].size());j ++){
                    if(j >= minn.size()) break;
                    else if(j >= son[i].size()){
                        is_swap = 1;
                        break;
                    }
                    if(minn[j] > son[i][j]){
                        is_swap = 1;
                        break;
                    }else if(minn[j] < son[i][j]){
                        break;
                    }
                }
                if(is_swap){
                    minn.clear();
                    for(auto && k : son[i]){
                        minn.push_back(k);
                    }
                }
            }
            // for(auto && i : minn){
            //     printf("%d ",i);
            // }
            // printf("\n");
            int res = 0;
            for(int i = 1;i <= n;i ++){
                if(minn.size() != son[i].size()) continue;
                bool p = 1;
                for(int j = 0;j < minn.size();j ++){
                    if(minn[j] != son[i][j]){
                        p = 0;
                        break;
                    }
                }
                if(p) res += i;
            }
            printf("%d\n",res);
        }
    }else{
        for(int i = 1;i <= n;i ++){
            val[i] = {i,a[i]};
        }
        sort(val + 1,val + n + 1);
        while(q --){
            scanf("%d %d",&u,&v);
            val[a[u]].pos = v;
            val[a[v]].pos = u;
            swap(a[u],a[v]);
            if(u == pos1) pos1 = v;
            else if(v == pos1) pos1 = u;
            int res = pos1;
            for(int i = 1;i < n;i ++){
                if(size[res] == i) break;
                if(res == 1) break;
                res = getans(res,val[i + 1].pos);
            }
            printf("%d\n",res);
        }
    }

    return 0;
}