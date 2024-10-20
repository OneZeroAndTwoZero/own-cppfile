#include<bits/stdc++.h>
using namespace std;

int n,r = 0;
long long cur = 1,k,ans = 0;
long long a[500005];

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
        scanf("%lld",&a[i]);
    }
    a[n] = 1;
    cur = a[0];
    for(int i = 0;i < n;i ++){
        while(r < n && cur < k){
            r ++;
            cur *= a[r];
        }
        ans += (r - i);
        cur /= a[i];
    }
    printf("%lld\n",ans);

    return 0;
}