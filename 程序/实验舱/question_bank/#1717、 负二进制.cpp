#include<bits/stdc++.h>
#define __len(x) (((1LL << (int)(3.3 * x + 1)) + 15))
using namespace std;

long long n;

void operate(long long x){
    if(x == 0) return;
    if(x % (-2) == 0){
        operate(x / -2);
        printf("0");
    }else if(x % -2 == 1){
        operate(x / -2);
        printf("1");
    }else{
        if(x < 0) x-= 2;
        else x += 2;
        operate(x / -2);
        printf("1");
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

    scanf("%lld",&n);
    if(n == 0){
        printf("0\n");
        return 0;
    }
    operate(n);

    return 0;
}