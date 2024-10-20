#include<bits/stdc++.h>
using namespace std;

int n,fa;
long long val[100005],ans = 0;
vector<int> a[100005];

void dfs(int u,long long cur){
    val[u] += cur;
    ans += abs(val[u]);
    for(auto && i : a[u]){
        dfs(i,cur - val[u]);
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
    for(int i = 2;i <= n;i ++){
        scanf("%d",&fa);
        a[fa].push_back(i);
    }
    for(int i = 1;i <= n;i ++){
        scanf("%lld",&val[i]);
    }
    dfs(1,0LL);
    printf("%lld\n",ans);

    return 0;
}