#include<bits/stdc++.h>
using namespace std;

int n,m,w;
int a,b;
int v[10005],c[10005];
int f[10005];
int dp[10005];
vector<int> son[10005];

void erg(int u){
    for(auto && i : son[u]){
        cout << u << " " << i << "[]\n";
        erg(i);
        v[u] += v[i];
        c[u] += v[i];
        v[i] = c[i] = 0;
        // cout << i << " " << v[i] << " " << c[i] << "[]\n";
    }
}

int find(int x){
    if(f[x] == x) return x;
    f[x] = find(f[x]);
    return f[x];
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d %d %d",&n,&m,&w);
    for(int i = 1;i <= n;i ++){
        scanf("%d %d",&v[i],&c[i]);
        f[i] = i;
    }
    while(m --){
        scanf("%d %d",&a,&b);
        f[find(a)] = find(b);
    }
    for(int i = 1;i <= n;i ++){
        if(f[i] != i){
            son[f[i]].push_back(i);
        }
    }
    for(int i = 1;i <= n;i ++){
        // cout << i << " " << f[i] << "[]\n";
        if(f[i] == i){
            erg(i);
        }
    }
    for(int i = 1;i <= n;i ++){
        // cout << i << ";;" << v[i] << "[]\n";
        for(int j = w;j >= v[i];j --){
            dp[j] = max(dp[j],dp[j - v[i]] + c[i]);
        }
    }
    printf("%d\n",dp[w]);

	return 0;
}