#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

long long n,p;
int cnt = 0;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%lld",&n);
    for(long long i = 2;i <= n / i;i ++){
        if(n % i) continue;
        cnt ++;
        p = i;
        while(n % i == 0) n /= i;
    }
    if(n != 1){
        p = n;
        cnt ++;
    }
    if(cnt == 1) printf("%lld\n",p);
    else printf("1\n");

    return 0;
}