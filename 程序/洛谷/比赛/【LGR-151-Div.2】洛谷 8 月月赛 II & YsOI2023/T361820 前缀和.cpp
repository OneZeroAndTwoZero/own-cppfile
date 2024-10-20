#include<bits/stdc++.h>
using namespace std;

int t,n;
long long x;
long long sum[35] = {0,1};

long long qpow(long long a,int b){
    if(b == 0) return 1;
    long long res = qpow(a,b / 2);
    res = res * res;
    if(b & 1) res *= a;
    return res;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

    scanf("%d",&t);
    while(t--){
        scanf("%d %lld",&n,&x);
        int st = 1;
        while(!(x & 1) && n - st >= 2){
            x /= 2;
            st ++;
        }
        sum[1] = sum[2] = x;
        for(int i = 3;i <= n;i ++){
            sum[i] = sum[i - 1] * 2;
        }
        printf("%lld\n",sum[n]);
    }

	return 0;
}