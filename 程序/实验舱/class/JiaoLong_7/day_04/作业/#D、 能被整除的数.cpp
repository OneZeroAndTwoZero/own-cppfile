#include<bits/stdc++.h>
using namespace std;

int m;
long long n,ans = 0;
long long p[205];

long long num(long long x){
    return n / x;
}

void dfs(int pos,long long sum,int k){
    if(pos == m){
        if(k == 0) return;
        if(k & 1) ans += num(sum);
        else ans -= num(sum);
        return;
    }
    if(sum > n) return;
    dfs(pos + 1,sum,k);
    dfs(pos + 1,sum * p[pos],k + 1);
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%lld %d",&n,&m);
    for(int i = 0;i < m;i ++)
        scanf("%lld",&p[i]);
    dfs(0,1,0);
    printf("%lld\n",ans);

    return 0;
}