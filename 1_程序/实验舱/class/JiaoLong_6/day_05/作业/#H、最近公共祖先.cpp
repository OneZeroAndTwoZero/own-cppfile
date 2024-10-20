#include<bits/stdc++.h>
using namespace std;

int n,m,s;
int x,y,u1,u2;
vector<int> a[200005];
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

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d %d %d",&n,&m,&s);
    for(int i = 1;i < n;i ++){
        scanf("%d %d",&x,&y);
        a[x].push_back(y);
        a[y].push_back(x);
    }
    erg(s,0);
    while(m --){
        scanf("%d %d",&u1,&u2);
        printf("%d\n",getans(u1,u2));
    }

    return 0;
}