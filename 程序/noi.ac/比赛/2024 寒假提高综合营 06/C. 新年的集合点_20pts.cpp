#include<bits/stdc++.h>
using namespace std;

int n,m,q;
int x,y,l,r;
vector<int> a[200005];
int pos[200005];
bool vis[200005];
int fa[200005];
int st[200005][25];
int h[200005];

void erg(int idx,int dep){
    h[idx] = dep;
    st[idx][0] = fa[idx];
    for(int i = 1;(1 << i) <= h[idx];i ++){
        st[idx][i] = st[st[idx][i - 1]][i - 1];
    }
    for(auto && i : a[idx]){
        if(i == fa[idx]) continue;
        fa[i] = idx;
        erg(i,dep + 1);
    }
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

int getd(int x,int y){
    int lca = getans(x,y);
    return h[x] + h[y] - 2 * h[lca];
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d %d %d",&n,&m,&q);
    for(int i = 1;i <= m;i ++){
        scanf("%d",&pos[i]);
        vis[pos[i]] = 1;
    }
    for(int i = 1;i < n;i ++){
        scanf("%d %d",&x,&y);
        a[x].push_back(y);
        a[y].push_back(x);
    }
    erg(1,0);
    if(n <= 300 && m <= 300 && q <= 300){
        while(q --){
            scanf("%d %d",&l,&r);
            int minn = 0x3f3f3f3f,minpos;
            for(int i = 1;i <= n;i ++){
                int cur = 0;
                for(int j = l;j <= r;j ++){
                    int d = getd(i,pos[j]);
                    cur = max(cur,d);
                }
                if(cur < minn){
                    minn = cur;
                    minpos = i;
                }
            }
            printf("%d %d\n",minpos,minn);
        }
    }else{
        scanf("%d %d",&l,&r);
    }

    return 0;
}