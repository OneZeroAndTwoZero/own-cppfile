#include<bits/stdc++.h>
using namespace std;

long long a,b;
long long ans = -1,ansm,ansn;
bool p = 1;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%lld %lld",&a,&b);
    for(long long n = b;n >= a && p;n --){
        for(long long m = n;m >= a;m --){
            if((n * n - m * n - m * m) * (n * n - m * n - m * m) != 1) continue;
            ans = m * m + n * n;
            ansm = m,ansn = n;
            p = 0;
            break;
        }
    }
    printf("max( %lld^2 + %lld^2 ) = %lld",ansm,ansn,ans);

    return 0;
}