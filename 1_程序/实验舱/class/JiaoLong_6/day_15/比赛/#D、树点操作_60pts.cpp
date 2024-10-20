#include<bits/stdc++.h>
using namespace std;

int n,q;
int u,v;
int op,pos,k,cur;
vector<int> a[300005];
long long val[300005];
int fa[300005];

// void erg(int u){
//     for(auto && i : a[u]){
//         if(i == fa[u]) continue;
//         fa[i] = u;
//         erg(i);
//     }
// }

void update(int u,int k,int v,int f){
    // printf("%d ,,, %d\n",u,k);
    val[u] += v;
    if(k == 0) return;
    for(auto && i : a[u]){
        if(i == f) continue;
        update(i,k - 1,v,u);
    }
}

long long query(int u,int k,int f){
    if(k == 0) return val[u];
    long long res = val[u];
    for(auto && i : a[u]){
        if(i == f) continue;
        res += query(i,k - 1,u);
    }
    // printf("%d %d %d;;\n",u,k,res);
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

    scanf("%d %d",&n,&q);
    for(int i = 1;i <= n;i ++){
        scanf("%lld",&val[i]);
    }
    for(int i = 1;i < n;i ++){
        scanf("%d %d",&u,&v);
        a[u].push_back(v);
        a[v].push_back(u);
    }
    // erg(1);
    while(q --){
        scanf("%d %d %d",&op,&u,&k);
        int t = u;
        if(op == 1){
            scanf("%d",&cur);
            // for(int i = 1;i <= k;i ++){
            //     t = fa[t];
            //     if(t == 0) break;
            //     val[t] += cur;
            // }
            update(u,k,cur,-1);
        }else{
            long long ans = query(u,k,-1);
            // for(int i = 1;i <= k;i ++){
            //     t = fa[t];
            //     if(t == 0) break;
            //     ans += val[t];  
            // }
            printf("%lld\n",ans);
        }
    }

    return 0;
}