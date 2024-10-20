#include<bits/stdc++.h>
using namespace std;

int n,m,x,y,head;
int fa[40005];
int h[40005];
int st[40005][25];
vector<int> a[40005];

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

void getans(int x,int y){
    int lca = getlca(x,y);
    if(lca == x){
        printf("1\n");
    }else if(lca == y){
        printf("2\n");
    }else{
        printf("0\n");
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
    for(int i = 1;i <= n;i ++){
        scanf("%d %d",&x,&y);
        if(y == -1){
            head = x;
            continue;
        }
        a[x].push_back(y);
        a[y].push_back(x);
    }
    erg(head,1);
    scanf("%d",&m);
    while(m --){
        scanf("%d %d",&x,&y);
        getans(x,y);
    }

	return 0;
}