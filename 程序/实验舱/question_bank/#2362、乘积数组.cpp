#include<bits/stdc++.h>
using namespace std;

int n;
long long a[100005];
long long sum[100005],resum[100005];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d",&n);
    sum[0] = resum[n + 1] = 1;
    for(int i = 1;i <= n;i ++){
        scanf("%lld",&a[i]);
        sum[i] = resum[i] = a[i];
        sum[i] *= sum[i - 1];
    }
    for(int i = n;i > 0;i --){
        resum[i] *= resum[i + 1];
    }
    for(int i = 1;i <= n;i ++){
        printf("%lld ",sum[i - 1] * resum[i + 1]);
    }

    return 0;
}