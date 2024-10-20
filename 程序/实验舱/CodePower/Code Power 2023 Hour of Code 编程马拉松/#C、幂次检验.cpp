#include<bits/stdc++.h>
using namespace std;

int t;
long long n;

long long qpow(long long a,long long b){
    if(b == 0) return 1;
    long long res = qpow(a,b / 2);
    res = res * res;
    if(b & 1) res = res * a;
    return res;
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
        scanf("%lld",&n);
        bool p = 1;
        for(int i = 1;i <= 15;i ++){
            if(qpow(i,i) == n){
                printf("%d\n",i);
                p = 0;
                break;
            }
        }
        if(p) printf("-1\n");
    }

    return 0;
}