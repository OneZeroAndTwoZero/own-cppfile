#include<bits/stdc++.h>
using namespace std;

int n,cnt = -1;
long long ans = 1,mod = 998244353;
bool a[100000008] = {0};
int p[20000006] = {0};

void shai(){
    for(int i = 2;i <= n;i ++){
        if(!a[i]){
            p[++cnt] = i;
            ans *= i;
            ans %= mod;
        }
        for(int j = 0;j <= cnt && i * p[j] <= n;j ++){
            a[i * p[j]] = 1;
            if(i % p[j] == 0){
                break;
            }
        }
    }
}

int main(){
// #ifndef ONLINE_JUDGE
//     freopen("data.in","r",stdin);
//     freopen("data.out","w",stdout);
// #endif

    scanf("%lld",&n);
    shai();
    for(int i = 0;i <= cnt;i ++){
        if(p[i] * p[i] > n) break;
        long long t;
        for(t = p[i] * p[i];t <= n;t *= p[i]){
            ans *= p[i];
            ans %= mod;
        }
    }
    printf("%lld\n",ans);
    
	return 0;
}
