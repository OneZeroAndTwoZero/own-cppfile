#include<bits/stdc++.h>
using namespace std;

struct node{
    int vi,wi;
};

int n,q;
int u,v,w;
int fa[200005];
int size[200005];
vector<node> a[200005];
long long ans = 0,cnt;

void __init(){
    for(int i = 1;i <= n;i ++){
        fa[i] = 0;
    }
    cnt = 0;
}

void erg(int u,long long val){
    cnt += val;
    size[u] = 1;
    for(auto && i : a[u]){
        if(i.vi == fa[u]) continue;
        fa[i.vi] = u;
        erg(i.vi,val + i.wi);
        size[u] += size[i.vi];
    }
}

int main(){
// #ifndef ONLINE_JUDGE
//     freopen("../data.in","r",stdin);
//     freopen("../data.out","w",stdout);
// #endif

    scanf("%d %d",&n,&q);
    for(int i = 1;i < n;i ++){
        scanf("%d %d %d",&u,&v,&w);
        a[u].push_back({v,w});
        a[v].push_back({u,w});
    }
    erg(1,0);
    for(int i = 1;i <= n;i ++){
        for(auto && k : a[i]){
            if(k.vi == fa[i]){
                // cout << i << " " << k.vi << " " << k.wi << " " << size[i] << "\n";
                ans += 2LL * k.wi * size[i] * (n - size[i]);
            }
        }
    }
    while(q --){
        scanf("%d %d",&v,&w);
        __init();
        erg(v,w);
        printf("%lld\n",(ans + cnt * 2) % 998244353);
    }

	return 0;
}