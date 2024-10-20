#include<bits/stdc++.h>
using namespace std;

int T,n;

bool check(int x){
    for(int i = 2;i <= x / i;i ++){
        if(x % i == 0) return 0;
    }
    return 1;
}

long long qpow(long long a,long long b){
    if(b == 0) return 1;
    long long res = qpow(a,b >> 1);
    res = (res * res) % n;
    if(b & 1) res = (res * a) % n;
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

    scanf("%d",&T);
    while(T --){
        scanf("%d",&n);
        if(n == 1){
            printf("1\n");
        }else if(n == 4){
            printf("1 3 2 4\n");
        }else if(!check(n)){
            printf("-1\n");
        }else{
            printf("1 ");
            for(int i = 2;i < n;i ++){
                printf("%lld ",(1LL * i * qpow(i - 1,n - 2)) % n);
            }
            printf("%d\n",n);
        }
    }

    return 0;
}