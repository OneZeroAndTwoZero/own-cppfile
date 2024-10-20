#include<bits/stdc++.h>
using namespace std;

int n,ans = -1;
long long k;
long long a[10000005];

bool check(int x){
    long long maxn = 0;
    for(int i = x;i <= n;i ++){
        maxn = max(maxn,a[i] - a[i - x]);
    }
    return maxn >= k;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d %lld",&n,&k);
    for(int i = 1;i <= n;i ++){
        scanf("%lld",&a[i]);
        a[i] += a[i - 1];
    }
    int l = 1,r = n;
    while(l <= r){
        int mid = (l + r) >> 1;
        if(check(mid)){
            ans = mid;
            r = mid - 1;
        }else{
            l = mid + 1;
        }
    }
    printf("%d\n",ans);

	return 0;
}