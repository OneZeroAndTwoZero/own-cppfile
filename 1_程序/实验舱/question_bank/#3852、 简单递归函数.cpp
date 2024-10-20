#include<bits/stdc++.h>
using namespace std;

long long n;
unordered_map<long long,long long> f;

long long dfs(long long x){
    if(x == 0) return 1;
    if(f[x]) return f[x];
    f[x] = dfs(x / 2) + dfs(x / 3);
    return f[x];
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    
    scanf("%lld",&n);
    printf("%lld\n",dfs(n));

    return 0;
}
