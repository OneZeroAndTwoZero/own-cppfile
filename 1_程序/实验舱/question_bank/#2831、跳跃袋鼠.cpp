#include<bits/stdc++.h>
using namespace std;

int q;
long long x,l,r,ans;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d",&q);
    while(q --){
        scanf("%lld",&x);
        l = 0,r = 200000,ans = -1;
        while(l <= r){
            long long mid = (l + r) >> 1;
            if(mid * (mid + 1) / 2 < x){
                l = mid + 1;
            }else{
                ans = mid;
                r = mid - 1;
            }
        }
        printf("%lld\n",ans);
    }

    return 0;
}