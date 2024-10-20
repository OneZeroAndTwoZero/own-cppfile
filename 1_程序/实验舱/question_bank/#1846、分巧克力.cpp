#include<bits/stdc++.h>
using namespace std;

int n;
long long ans,k,h[100005],w[100005];

bool check(long long x){
    long long res = 0;
    for(int i = 0;i < n;i ++){
        res += ((h[i] / x) * (w[i] / x));
    }
    return res >= k;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    
    scanf("%d %lld",&n,&k);
    for(int i = 0;i < n;i ++){
        scanf("%lld %lld",&h[i],&w[i]);
    }
    long long l = 1,r = 1000000000000LL;
    while(l <= r){
        long long mid = (l + r) >> 1;
        if(check(mid)){
            ans = mid;
            l = mid + 1;
        }else{
            r = mid - 1;
        }
    }
    printf("%lld\n",ans);

    return 0;
}