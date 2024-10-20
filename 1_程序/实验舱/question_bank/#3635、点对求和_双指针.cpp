#include<bits/stdc++.h>
using namespace std;

int n,r = 0;
long long a[200005],b[200005];
long long ans = 0,sum = 0;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d",&n);
    for(int i = 0;i < n;i ++){
        scanf("%lld",&a[i]);
    }
    for(int i = 0;i < n;i ++){
        scanf("%lld",&b[i]);
        sum += b[i];
    }
    sort(a,a + n);
    sort(b,b + n);
    for(int i = 0;i < n;i ++){
        while(r < n && b[r] <= a[i]){
            sum -= b[r];
            r ++;
        }
        ans += a[i] * r;
        ans += sum;
    }
    printf("%lld\n",ans);

    return 0;
}