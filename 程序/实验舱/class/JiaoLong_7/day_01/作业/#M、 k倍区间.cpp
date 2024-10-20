#include<bits/stdc++.h>
using namespace std;

int n,k;
int cnt[100005];
long long a[100005],ans = 0;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %d",&n,&k);
    cnt[0] = 1;
    for(int i = 1;i <= n;i ++){
        scanf("%lld",&a[i]);
        a[i] += a[i - 1];
        ans += cnt[a[i] % k] ++;
    }
    printf("%lld\n",ans);

    return 0;
}
