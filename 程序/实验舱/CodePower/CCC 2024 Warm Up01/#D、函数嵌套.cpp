#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

int T;
long long x,y;

long long f(long long x,long long y){
    if(y == 0 || x < 10) return x;
    long long res = 1;
    while(x){
        res *= (x % 10);
        x /= 10;
    }
    return f(res,y - 1);
}

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
        scanf("%lld %lld",&x,&y);
        printf("%lld\n",f(x,y));
    }

    return 0;
}