#include<bits/stdc++.h>
using namespace std;

int t;
long long a,b,ans;

long long gcd(long long a,long long b){
    if(b == 0) return a;
    return gcd(b,a % b);
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d",&t);
    while(t --){
        scanf("%lld %lld",&a,&b);
        ans = a * b / gcd(a,b);
        if(ans == a || ans == b){
            ans *= (b / a);
        }
        printf("%lld\n",ans);
    }

    return 0;
}