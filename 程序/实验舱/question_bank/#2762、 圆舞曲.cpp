#include<bits/stdc++.h>
using namespace std;

long long n,ans = 1;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%lld",&n);
    for(int i = n;i > (n >> 1);i --) ans *= i;
    for(int i = 1;i <= (n >> 1);i ++) ans /= i;
    for(int i = 1;i < (n >> 1);i ++) ans *= i * i;
    printf("%lld\n",ans / 2);

    return 0;
}