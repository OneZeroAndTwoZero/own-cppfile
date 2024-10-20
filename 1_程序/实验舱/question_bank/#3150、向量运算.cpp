#include<bits/stdc++.h>
using namespace std;

int n;
long long x,y,a[1005],b[1005];

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
    }
    for(int i = 0;i < n;i ++){
        scanf("%lld",&b[i]);
    }
    for(int i = 0;i < n;i ++){
        printf("%lld%c",x * a[i] + y * b[i]," \n"[i == n - 1]);
    }

    return 0;
}