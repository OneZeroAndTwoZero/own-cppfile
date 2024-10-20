#include<bits/stdc++.h>
using namespace std;

long long n;
long long a[10005] = {0};
long long lessr[1005],bigger[1005];
long long ans = 0;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%lld",&n);
    for(long long i = 0;i < n;i ++){
        scanf("%lld",&a[i]);
    }
    for(long long i = 0;i < n;i ++){
        for(long long j = 0;j < i;j ++){
            lessr[i] += a[j] < a[i];
        }
    }
    for(long long i = 0;i < n;i ++){
        for(long long j = i + 1;j < n;j ++){
            bigger[i] += a[i] < a[j];
        }
    }
    for(long long i = 0;i < n;i ++){
        for(long long j = i + 1;j < n;j ++){
            if(a[j] <= a[i]) continue;
            ans += lessr[i] * bigger[j];
        }
    }
    printf("%lld\n",ans);

	return 0;
}