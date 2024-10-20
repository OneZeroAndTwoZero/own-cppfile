#include<bits/stdc++.h>
using namespace std;

long long n,p = 10,num = 9,cur = 1,ans;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%lld",&n);
    while(n >= num){
        ans += num * ((cur - 1) / 3);
        n -= num;
        num = p * 10 - p;
        p *= 10,cur ++;
    }
    ans += n * ((cur - 1) / 3);
    printf("%lld\n",ans);

    return 0;
}