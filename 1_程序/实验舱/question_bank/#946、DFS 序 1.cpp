#include<bits/stdc++.h>
#define lowbit(x) (x & -x)
using namespace std;

int n,m,s,cid = 0;
int x,y,op,p;
vector<int> a[1000006];
long long c[1000006];
int v[1000006],dfn[1000006],size[1000006];
int fa[1000006];

void erg(int u){
    dfn[u] = ++ cid;
    size[u] = 1;
    for(auto && i : a[u]){
        if(i == fa[u]) continue;
        fa[i] = u;
        erg(i);
        size[u] += size[i];
    }
}

void update(int pos,long long cur){
    for(int i = pos;i <= n;i += lowbit(i)){
        c[i] += cur;
    }
}

long long query(int pos){
    if(pos == 0) return 0LL;
    long long res = 0;
    for(int i = pos;i > 0;i -= lowbit(i)){
        res += c[i];
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

    scanf("%d %d %d",&n,&m,&s);
    for(int i = 1;i <= n;i ++){
        scanf("%d",&v[i]);
    }
    for(int i = 1;i < n;i ++){
        scanf("%d %d",&x,&y);
        a[x].push_back(y);
        a[y].push_back(x);
    }
    erg(s);
    for(int i = 1;i <= n;i ++){
        update(dfn[i],v[i]);
    }
    while(m --){
        scanf("%d %d",&op,&p);
        if(op == 1){
            scanf("%d",&x);
            update(dfn[p],x);
        }else{
            printf("%lld\n",query(dfn[p] + size[p] - 1) - query(dfn[p] - 1));
        }
    }

    return 0;
}