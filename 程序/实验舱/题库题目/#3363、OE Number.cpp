#include<bits/stdc++.h>
using namespace std;

long long a,b;
int ans = 0;

bool ok(long long x){
    int res1 = 0,res0 = 0;
    while(x){
        res1 += x % 10;
        x /= 10;
        res0 += x % 10;
        x /= 10;
    }
    return res0 == res1;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

    scanf("%lld %lld",&a,&b);
    for(long long i = a;i <= b;i ++){
        ans += ok(i);
    }
    printf("%d\n",ans);

	return 0;
}
