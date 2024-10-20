#include<bits/stdc++.h>
using namespace std;

int n,ans = 0x3f3f3f3f;
long long k,a[10000005];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d %lld",&n,&k);
    for(int i = 1;i <= n;i ++){
        scanf("%lld",&a[i]);
    }
    if(n <= 1000){
        for(int i = 1;i <= n;i ++){
            a[i] += a[i - 1];
        }
        for(int i = 1;i <= n;i ++){
            for(int j = i;j - i + 1 < ans && j <= n;j ++){
                if(a[j] - a[i - 1] >= k){
                    ans = min(ans,j - i + 1);
                }
            }
        }
        if(ans == 0x3f3f3f3f) ans = -1;
        printf("%d\n",ans);
    }else{
        int l = 1;
        long long cnt = 0;
        for(int i = 1;i <= n;i ++){
            while(cnt < k && l <= n){
                cnt += a[l];
                l ++;
            }
            if(cnt >= k) ans = min(ans,l - i);
            cnt -= a[i];
        }
        if(ans == 0x3f3f3f3f) ans = -1;
        printf("%d\n",ans);
    }

	return 0;
}