#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

long long l,r;
int pos;
bool vis[10000006];
long long phi[10000006];
int f[10000006];

void Euler(int n){
    for(int i = 2;i <= n;i ++){
        if(!vis[i]){
            phi[pos ++] = i;
        }
        for(int j = 0;j < pos && i * phi[j] <= n;j ++){
            vis[i * phi[j]] = 1;
            if(i % phi[j] == 0) break;
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

    Euler(1000001);
    while(~scanf("%lld %lld",&l,&r)){
        for(long long i = l;i <= r + 5;i ++){
            f[i - l] = 0;
        }
        for(int i = 0;i < pos;i ++){
            for(long long j = max((l - 1) / phi[i] + 1,2LL);j * phi[i] <= r;j ++){
                f[j * phi[i] - l] = 1;
            }
        }
        vector<long long> a;
        for(long long i = max(l,2LL);i <= r;i ++){
            if(f[i - l]) continue;
            a.push_back(i);
        }
        long long maxn = -1,maxpos = -1,minn = 1000000,minpos = -1;
        int len = a.size();
        for(int i = 1;i < len;i ++){
            if(a[i] - a[i - 1] > maxn){
                maxn = a[i] - a[i - 1];
                maxpos = a[i - 1];
            }
            if(a[i] - a[i - 1] < minn){
                minn = a[i] - a[i - 1];
                minpos = a[i - 1];
            }
        }
        if(maxn != -1){
            printf("%lld,%lld are closest, %lld,%lld are most distant.\n",minpos,minpos + minn,maxpos,maxpos + maxn);
        }else{
            printf("There are no adjacent primes.\n");
        }
    }

    return 0;
}
