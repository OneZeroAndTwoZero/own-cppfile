#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

int n,ans = 0x3f3f3f3f;
long long s,sum;
long long a[100005];

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

    scanf("%d %lld",&n,&s);
    for(int i = 0;i < n;i ++){
        scanf("%lld",&a[i]);
    }
    sum = a[0];
    int r = 0;
    for(int l = 0;l < n;l ++){
        while(r < n && sum < s){
            r ++;
            sum += a[r];
        }
        if(sum >= s)
            ans = min(ans,r - l + 1);
        if(sum < s && ans == 0x3f3f3f3f){
            printf("0\n");
            return 0;
        }
        sum -= a[l];
    }
    printf("%d\n",ans);

    return 0;
}