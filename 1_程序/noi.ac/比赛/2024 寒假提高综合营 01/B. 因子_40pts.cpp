#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

int n,t;
long long mod = 1000000007;
long long ans = 0,k;
long long f[1005][1005];
vector<long long> a,b;

void operate(int x,long long m){
    ans ++;
    if(x == 1) return;
    int cur = 0;
    for(int i = 2;i <= x / i;i ++){
        if(x % i) continue;
        b.push_back(i);
        if(x / i != i) b.push_back(x / i);
        cur ++;
    }
    ans %= mod;
    if(cur){
        b.push_back(x);
        return;
    }
    ans += x + (k - m);
    ans %= mod;
}

long long make(int x,int m){
    long long res = 0;
    for(int i = 1;i <= x / i;i ++){
        if(x % i) continue;
        res = (res + f[i][m - 1]) % mod;
        if(x / i != i) res = (res + f[x / i][m - 1]) % mod;
    }
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

    scanf("%d %lld",&n,&k);
    if(n <= 10000 && k <= 100){
        for(int i = 0;i < n;i ++){
            scanf("%d",&t);
            a.push_back(t);
        }
        for(long long i = 1;i <= k && a.size();i ++){
            cout << a.size() << ";;\n";
            for(auto && i : a){
                cout << i << " ";
            }
            cout << "\n";
            for(auto && m : a){
                operate(m,i);
            }
            a.clear();
            swap(a,b);
        }
        for(auto && i : a){
            ans = (ans + i) % mod;
        }
    }else if(k <= 1000){
        for(int i = 1;i <= 1000;i ++) f[i][0] = i;
        for(int j = 1;j <= 1000;j ++){
            for(int i = 1;i <= 1000;i ++){
                f[i][j] = make(i,j);
            }
        }
        for(int i = 0;i < n;i ++){
            scanf("%d",&t);
            ans = (ans + f[t][k]) % mod;
        }
    }
    printf("%lld\n",ans % mod);

    return 0;
}