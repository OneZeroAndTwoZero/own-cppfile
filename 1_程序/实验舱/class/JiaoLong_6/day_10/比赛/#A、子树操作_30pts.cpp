#include<bits/stdc++.h>
using namespace std;

int n,m;
int u,v,d;
long long x,val[300005];
int fa[300005];
vector<int> a[300005];
long long cur[300005][2];

void erg(int u){
    for(auto && i : a[u]){
        if(i == fa[u]) continue;
        fa[i] = u;
        erg(i);
    }
}

void operate(int u,int d,long long x){
    if(d < 0) return;
    val[u] += x;
    for(auto && i : a[u]){
        if(i == fa[u]) return;
        operate(i,d - 1,x);
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
    for(int i = 1;i < n;i ++){
        scanf("%d %d",&u,&v);
        a[u].push_back(v),a[v].push_back(u);
    }
    erg(1);
    scanf("%d",&m);
    if(n <= 5005){
        while(m --){
            scanf("%d %d %lld",&v,&d,&x);
            operate(v,d,x);
        }
        for(int i = 1;i <= n;i ++){
            printf("%lld%c",val[i]," \n"[i == n]);
        }
    }else{
        while(m --){
            scanf("%d %d %lld",&v,&d,&x);
            cur[v][0] += x;
            if(d) cur[v][1] += x;
        }
        for(int i = 1;i <= n;i ++){
            long long res = cur[i][0] + cur[fa[i]][1];
            printf("%lld%c",res," \n"[i == n]);
        }
    }

    return 0;
}