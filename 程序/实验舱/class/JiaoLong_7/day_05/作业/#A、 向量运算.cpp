#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

int n;
long long x,y;
long long a[100005],b[100005];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %lld %lld",&n,&x,&y);
    for(int i = 0;i < n;i ++){
        scanf("%lld",&a[i]);
        a[i] *= x;
    }
    for(int i = 0;i < n;i ++){
        scanf("%lld",&b[i]);
        b[i] *= y;
    }
    for(int i = 0;i < n;i ++){
        printf("%lld%c",a[i] + b[i]," \n"[i == n - 1]);
    }

    return 0;
}