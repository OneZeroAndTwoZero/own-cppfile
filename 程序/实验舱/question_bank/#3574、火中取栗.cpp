#include<bits/stdc++.h>
using namespace std;

int n,k,t;
long long ans;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %d",&n,&k);
    for(int i = 0;i < n;i ++){
        scanf("%d",&t);
        ans += (t - 1) / k + 1;
    }
    printf("%lld\n",ans);

    return 0;
}