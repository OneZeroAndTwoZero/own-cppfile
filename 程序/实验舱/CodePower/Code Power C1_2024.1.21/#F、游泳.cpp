#include<bits/stdc++.h>
using namespace std;

int t;
long long p,a,b,c;

long long operate(long long p,long long x){
    long long res = ((p - 1) / x) + 1;
    return x * res - p;
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
        scanf("%lld %lld %lld %lld",&p,&a,&b,&c);
        printf("%lld\n",min({operate(p,a),operate(p,b),operate(p,c)}));
    }

    return 0;
}