#include<bits/stdc++.h>
using namespace std;

int n,ans = 0;
long long f[505],s = 0;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    f[1] = 1;
    for(int i = 2;i <= 500;i ++){
        f[i] = f[i - 1] + 2 * i - 1;
    }
    scanf("%d",&n);
    for(int k = 1;k <= n;k ++){
        for(int i = 1;i <= n;i ++){
            if(i < k) continue;
            ans += max(0,i - k + 1);
            s += max(0,i - k + 1) * f[k];
        }
    }
    for(int k = 1;k <= n;k ++){
        for(int i = 2;i <= n;i ++){
            if(n - i + 1 < k) continue;
            ans += max(0,i - k);
            s += max(0,i - k) * f[k];
        }
    }
    printf("%lld\n%lld\n",ans,s);

    return 0;
}