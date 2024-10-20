#include<bits/stdc++.h>
#define get(a,b) (a * a * a + a * a * b + a * b * b + b * b * b)
using namespace std;

long long n,ans = 0x3f3f3f3f3f3f3f3f;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%lld",&n);
    for(long long a = 0;a <= 1000000;a ++){
        long long l = 0,r = 1000000;
        while(l <= r){
            long long mid = (l + r) >> 1;
            if(get(a,mid) >= n){
                ans = min(ans,get(a,mid));
                r = mid - 1;
            }else{
                l = mid + 1;
            }
        }
    }
    printf("%lld\n",ans);

    return 0;
}