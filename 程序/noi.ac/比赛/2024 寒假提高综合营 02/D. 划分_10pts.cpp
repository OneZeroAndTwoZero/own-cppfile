#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

int n,m,d,k;
int t[1005];
long long ans = 0,mod = 998244353;

long long qpow(int a,int b){
    if(b == 0) return 1;
    long long res = qpow(a,b >> 1);
    res = (res * res) % mod;
    if(b & 1) res = (res * a) % mod;
    return res;
}

int check(){
    int res = 0,minn;
    vector<int> q;
    for(int i = 0;i <= m;i ++){
        for(int j = 0;j < t[i];j ++){
            q.push_back(i);
        }
    }
    minn = q[0];
    q.push_back(0x3f3f3f3f);
    for(int i = 0;i < q.size();i ++){
        if(i != 0 && q[i] - q[i - 1] > d){
            res += d + (q[i - 1] - minn);
            minn = q[i];
        }
    }
    // cout << res << "[]\n";
    return res;
}

void dfs(int p,int sum){
    if(p == m){
        if(sum != n) return;
        if(check() == k) ans ++;
        return;
    }
    for(int i = 0;i <= n - sum;i ++){
        t[p] = i;
        dfs(p + 1,sum + i);
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

    scanf("%d %d %d %d",&n,&m,&d,&k);
    if(d == 0){
        if(k != 0) printf("0\n");
        else printf("%lld\n",qpow(n,m));
        return 0;
    }
    dfs(0,0);
    printf("%d\n",ans);

    return 0;
}