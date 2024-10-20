#include<bits/stdc++.h>
using namespace std;

long long n,k;

void operate(long long n,long long k){
    if(n == 0) return;
    if(k < (1LL << (n - 1))){
        printf("0");
        operate(n - 1,k);
    }else{
        printf("1");
        operate(n - 1,(1LL << n) - k - 1);
    }
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%lld %lld",&n,&k);
    operate(n,k);

    return 0;
}