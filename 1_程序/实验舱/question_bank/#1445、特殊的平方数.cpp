#include<bits/stdc++.h>
using namespace std;

long long n;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%lld",&n);
    for(long long i = 5;i * i <= n;i += 10){
        printf("%lld\n",i * i);
    }

    return 0;
}