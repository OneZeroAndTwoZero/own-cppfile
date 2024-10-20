#include<bits/stdc++.h>
using namespace std;

int t,n,k;
long long a[200005],ans = 0;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d",&t);
    while(t --){
        ans = 0;
        scanf("%d %d",&n,&k);
        for(int i = 1;i <= n;i ++)
            scanf("%lld",&a[i]);
        sort(a + 1,a + n + 1);
        for(int i = 1;i <= n;i ++)
            a[i] += a[i - 1];
        for(int i = 0;i <= k;i ++){
            // cout << i << " " << a[n - (k - i)] - a[2 * i] << ";;;\n";
            ans = max(ans,a[n - (k - i)] - a[2 * i]);
        }
        printf("%lld\n",ans);
    }

	return 0;
}