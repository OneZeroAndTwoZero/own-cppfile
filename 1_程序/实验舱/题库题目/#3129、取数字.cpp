#include<bits/stdc++.h>
using namespace std;

int n,ans = 0x3f3f3f3f;
long long x,a[500005];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d %lld",&n,&x);
    for(int i = 1;i <= n;i ++){
        scanf("%lld",&a[i]);
        a[i] += a[i - 1];
    }
    int r = n;
    for(int l = n;l >= 0;l --){
        while(r >= l && a[l] + (a[n] - a[r]) <= x){
            if(a[l] + (a[n] - a[r]) == x)
                ans = min(ans,l + (n - r));
            -- r;
        }
    }
    if(ans == 0x3f3f3f3f) ans = -1;
    printf("%d\n",ans);

	return 0;
}