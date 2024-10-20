#include<bits/stdc++.h>
#define __len(x) (((1LL << (int)(3.3 * x + 1)) + 15))
using namespace std;

long long n,q,x;
unordered_map<long long,int> f;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%lld %lld",&n,&q);
    while(q --){
        scanf("%lld",&x);
        f[x] = 1 - f[x];
    }
    for(auto && i : f){
        if(i.second) n --;
    }
    printf("%lld\n",n);

    return 0;
}