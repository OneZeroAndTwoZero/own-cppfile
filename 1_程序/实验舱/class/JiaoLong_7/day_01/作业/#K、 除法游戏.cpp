#include<bits/stdc++.h>
using namespace std;

long long a,b;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%lld %lld",&a,&b);
    while(1){
        long long cur = __gcd(a,b);
        if(cur == 1) break;
        b /= cur;
    }
    if(b == 1){
        printf("Yes\n");
    }else{
        printf("No\n");
    }

    return 0;
}
