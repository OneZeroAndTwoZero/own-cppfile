#include<bits/stdc++.h>
using namespace std;

int n;
long long ans,mod = 998244353,a[100005];

long long qpow(long long a,long long b){
    if(b == 0) return 1;
    int res = qpow(a,(b >> 1));
    res = (res * res) % mod;
    if(b & 1) res *= a;
    return res % mod;
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
        scanf("%lld",&a[i]);
    }
    for(int i = 1;i <= n;i ++){
        for(int j = i + 1;j <= n;j ++){
            if(a[i] <= a[j]){
                ans = (ans + qpow(2,j - i - 1)) % mod;
            }
        }
    }
    printf("%lld\n",ans);

	return 0;
}