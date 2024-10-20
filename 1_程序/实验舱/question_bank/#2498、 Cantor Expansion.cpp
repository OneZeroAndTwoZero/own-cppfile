#include<bits/stdc++.h>
#define lowbit(x) (x & -x)
using namespace std;

int n,t;
long long mul[1000006];
long long ans = 0,mod = 998244353;
int c[1000006];

void update(int x){
    for(int i = x;i <= n;i += lowbit(i)){
        c[i] ++;
    }
}

int query(int x){
    int res = 0;
    for(int i = x;i;i -= lowbit(i)){
        res += c[i];
    }
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
    
    scanf("%d",&n);
    mul[0] = 1;
    for(int i = 1;i <= n;i ++) mul[i] = (mul[i - 1] * i) % mod;
    for(int i = n - 1;i >= 0;i --){
        scanf("%d",&t);
        int cur = t - query(t - 1) - 1;
        update(t);
        ans += 1LL * cur * mul[i];
        ans %= mod;
    }
    printf("%lld\n",ans + 1);

    return 0;
}
