#include<bits/stdc++.h>
using namespace std;

int n,k;
int a[1005];
long long cnt[2005];
long long ans = 0;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d %d",&n,&k);
    for(int i = 0;i < n;i ++){
        scanf("%d",&a[i]);
    }
    for(int i = 0;i < n;i ++){
        for(int j = 0;j < n;j ++){
            cnt[a[i] + a[j]] ++;
        }
    }
    for(int i = 0;i <= k;i ++){
        ans += cnt[i] * cnt[k - i];
    }
    printf("%lld\n",ans);

	return 0;
}