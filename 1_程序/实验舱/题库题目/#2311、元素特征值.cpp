#include<bits/stdc++.h>
using namespace std;

int n;
long long a[100005],sum[2][100005];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d",&n);
    for(int i = 1;i <= n;i ++){
        scanf("%lld",&a[i]);
        sum[0][i] = sum[0][i - 1] + a[i];
    }
    for(int i = n;i >= 1;i --) sum[1][i] = sum[1][i + 1] + a[i];
    for(int i = 1;i <= n;i ++)
        printf("%lld ",a[i] * (i - 1) - sum[0][i - 1] + sum[1][i + 1] - a[i] * (n - i));

	return 0;
}