#include<bits/stdc++.h>
using namespace std;

int t,mod = 1000000007;
int x,y,k;
long long ans = 0;
long long fac[5005];

long long qpow(int a,int b){
    if(!b){
        return 1;
    }
    long long res = qpow(a,b / 2);
    res = (res * res) % mod;
    if(b & 1){
        res = (res * a) % mod;
    }
    return res;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    fac[1] = 1;
    for(int i = 2;i <= 5000;i ++){
        fac[i] = (fac[i - 1] * i) % mod;
    }
    scanf("%d",&t);
    while(t --){
        scanf("%d %d %d",&x,&y,&k);
        if(abs(y - x) > k || (k - abs(x - y)) % 2 == 1){
            printf("0\n");
        }else{
            ans = fac[k];
            ans = (ans * qpow((k - abs(x - y)) / 2,mod - 2)) % mod;
            ans = (ans * qpow(k - (k - abs(x - y)) / 2,mod - 2)) % mod;
            printf("%lld\n",ans);
        }
    }

	return 0;
}