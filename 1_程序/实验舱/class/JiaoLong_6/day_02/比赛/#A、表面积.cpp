#include<bits/stdc++.h>
using namespace std;

int t,k;
long long p[105],ci[105];
long long ans;

long long qpow(long long a,int b){
    if(b == 0){
        return 1LL;
    }
    long long res = qpow(a,b / 2);
    res *= res;
    if(b & 1) res *= a;
    return res;
}

void dfs(int r,long long a,long long b,long long c){
    if(r == k){
        ans = min(ans,2LL * (a * b + a * c + b * c));
        return;
    }
    if(2LL * (a * b + a * c + b * c) >= ans){
        return;
    }
    for(int i = 0;i <= ci[r];i ++){
        for(int j = 0;j <= ci[r] - i;j ++){
            dfs(r + 1,a * qpow(p[r],i),b * qpow(p[r],j),c * qpow(p[r],ci[r] - i - j));
        }
    }
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d",&t);
    while(t --){
        scanf("%d",&k);
        for(int i = 0;i < k;i ++){
            scanf("%lld %lld",&p[i],&ci[i]);
        }
        ans = 100000000000000000LL;
        dfs(0,1,1,1);
        printf("%lld\n",ans);
    }

	return 0;
}