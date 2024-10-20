#include<bits/stdc++.h>
using namespace std;

int n;
long long ans = 1;
int cnt = 0;
int a[200005];
bool vis[200005];

long long gcd(long long a,long long b){
    if(b == 0) return a;
    return gcd(b,a % b);
}

void dfs(int u){
    vis[u] = 1;
    cnt ++;
    if(!vis[a[u]]) dfs(a[u]);
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
        scanf("%d",&a[i]);
    }
    for(int i = 1;i <= n;i ++){
        if(vis[i]) continue;
        cnt = 0;
        dfs(i);
        ans = cnt / gcd(cnt,ans) * ans;
    }
    printf("%lld\n",ans % 998244353);

    return 0;
}