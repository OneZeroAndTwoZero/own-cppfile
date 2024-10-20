#include<bits/stdc++.h>
using namespace std;

int T;
long long n;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d",&T);
    while(T --){
        scanf("%lld",&n);
        if(n & 1) printf("%lld\n",n);
        else printf("%lld\n",(n >> 1) ^ n);
    }

    return 0;
}