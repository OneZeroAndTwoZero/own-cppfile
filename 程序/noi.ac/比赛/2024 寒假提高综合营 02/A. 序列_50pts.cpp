#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

int n;
bool is_ok3 = 1;
long long ans,mod = 1000000007;
int a[200005];
int cnt[200005];
int t[200005],check[200005];

long long qpow(int a,int b){
    if(b == 0) return 1;
    long long res = qpow(a,b >> 1);
    res = (res * res) % mod;
    if(b & 1) res = (res * a) % mod;
    return res;
}

void dfs(int k,int pos){
    if(k == n){
        for(int i = 0;i < pos;i ++){
            check[i] = t[i];
            // cout << check[i] << " ";
        }
        // cout << "\n";
        sort(check,check + pos);
        for(int i = 0;i < pos;i ++){
            ans += (check[i] == i + 1);
        }
        return;
    }
    t[pos] = a[k + 1];
    dfs(k + 1,pos + 1);
    t[pos] = 0;
    dfs(k + 1,pos);
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d",&n);
    for(int i = 1;i <= n;i ++){
        scanf("%d",&a[i]);
        cnt[a[i]] ++;
    }
    for(int i = 1;i <= n;i ++){
        if(cnt[i]) continue;
        is_ok3 = 0;
        break;
    }
    if(is_ok3){
        printf("%lld\n",(qpow(2,n) - 1 + mod) % mod);
    }else if(n <= 100){
        dfs(0,0);
        printf("%lld\n",ans % mod);
    }

    return 0;
}