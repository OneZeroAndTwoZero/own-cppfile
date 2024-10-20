#include<bits/stdc++.h>
using namespace std;

long long m,n,a,t,maxn,ans = 0;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%lld %lld %lld",&m,&n,&a);
    ans += a,n --;
    for(int i = 0;i < m;i ++){
        scanf("%lld",&t);
        maxn = max(maxn,t);
    }
    if(maxn <= a){
        ans += min(n,m - 1) * a;
        n -= min(n,m - 1);
    }
    ans += maxn * n;
    printf("%lld\n",ans);

    return 0;
}