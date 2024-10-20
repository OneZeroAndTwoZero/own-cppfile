#include<bits/stdc++.h>
using namespace std;

long long ans,m,k,n = 1,mod = 1000000007;
long long pi,c;
int pos,pri[2000006];
bool p[6000007];

long long qpow(long long a,long long b){
    if(b == 0) return 1;
    long long res = qpow(a,b >> 1);
    res = (res * res) % mod;
    if(b & 1) res = (res * a) % mod;
    return res;
}

long long operate(long long n){
    long long res = n,cur = n;
    for(long long i = 2;i <= cur / i;i ++){
        if(cur % i == 0){
            res = res / i * (i-1);
            while(cur % i == 0){
                cur /= i;
            }
        }
    }
	if(cur > 1) res = res / cur * (cur - 1);
	return res;
}

void Olashai(int n){
    for(int i = 2;i <= n;i++){
        if(!p[i]){
            pri[pos ++] = i;
        }
        for(int j = 0;j < pos && pri[j] <= n / i;j ++){
            p[i * pri[j]] = 1;
            if(i % pri[j] == 0) break;
        }
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

    scanf("%lld %lld",&m,&k);
    for(int i = 0;i < m;i ++){
        scanf("%lld %lld",&pi,&c);
        n *= qpow(pi,c);
    }
    if(n <= 100000000){
        for(long long i = 1;i <= n;i ++){
            if(__gcd(n,i) != 1) continue;
            ans = (ans + qpow(i,k)) % mod;
        }
    }else{
        Olashai(16);
    }
    printf("%lld\n",ans);

    return 0;
}