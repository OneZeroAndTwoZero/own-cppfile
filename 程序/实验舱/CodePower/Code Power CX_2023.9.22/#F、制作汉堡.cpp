#include<bits/stdc++.h>
using namespace std;

long long n,x;
long long h[55],num[55];

long long operate(long long n,long long x){
    if(n == 0) return 1;
    if(x == 1) return 0;
    if(x == h[n]) return num[n];
    if(x == 2 + h[n - 1]) return num[n - 1] + 1;
    if(x < 2 + h[n - 1]) return operate(n - 1,x - 1);
    else return num[n - 1] + 1 + operate(n - 1,x - h[n - 1] - 2);
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%lld %lld",&n,&x);
    h[0] = num[0] = 1;
    for(int i = 1;i <= 50;i ++){
        h[i] = 2 * h[i - 1] + 3;
        num[i] = 2 * num[i - 1] + 1;
    }
    scanf("%lld %lld",&n,&x);
    printf("%lld\n",operate(n,x));

	return 0;
}