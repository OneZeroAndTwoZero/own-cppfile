#include<bits/stdc++.h>
using namespace std;

long long a,b,cnt = 0;
bool p[6000007];
unordered_map<long long,int> f;

void Eratosthenes(int n){
    p[0] = p[1] = 1;
    for(int i = 2;i <= n;i ++){
        if(p[i]) continue;
        for(int j = 2;j * i <= n;j ++){
            p[j * i] = 1;
        }
        // min = 2 is important!
        long long st = max(2LL,a / i);
        for(st;st * i <= b;st ++){
            f[st * i] = 1;
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

    scanf("%lld %lld",&a,&b);
    Eratosthenes((int)sqrt(b) + 10);
    for(long long i = a;i <= b;i ++){
        if(!(i & 1)) continue;
        if(f[i] == 0) cnt --;
        cnt ++;
    }
    printf("%lld\n",cnt);

    return 0;
}
