#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

int n;
long long cur = 0;
double lena = 0,lenb = 0,ans;
long long a[100005],b[100005];

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
        lena += a[i] * a[i];
    }
    for(int i = 0;i < n;i ++){
        scanf("%lld",&b[i]);
        cur += a[i] * b[i];
        lenb += b[i] * b[i];
    }
    lena = sqrt(lena),lenb = sqrt(lenb);
    ans = (1.000 * cur) / (lena * lenb);
    ans = acos(ans) / 3.14159 * 180.0;
    printf("%.2lf\n",ans);

    return 0;
}