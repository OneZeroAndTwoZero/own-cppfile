#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

int n;
int a[2000005];
int st[2000005][35];
long long ans = 0,mod = 998244353;

int getans(int l,int r){
    if(l > r) return -0x3f3f3f3f;
    return max(st[l][__lg(r - l + 1)]
    ,st[r - (1 << (__lg(r - l + 1))) + 1][__lg(r - l + 1)]);
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
        st[i][0] = a[i];
    }
    for(int j = 1;j <= __lg(n) + 1;j ++){
        for(int i = 1;i + (1 << j) - 1 <= n;i ++){
            st[i][j] = max(st[i][j - 1],st[i + (1 << (j - 1))][j - 1]);
        }
    }
    for(int i = 1;i <= n;i ++){
        for(int j = i + 1;j <= n;j ++){
            if(getans(i + 1,j - 1) < min(a[i],a[j])) ans ++;
        }
    }
    printf("%lld\n",ans % mod);

    return 0;
}