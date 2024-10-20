#include<bits/stdc++.h>
using namespace std;

int T, len = 3;
int n, itel, iter;
int base[15] = {127, 131, 137};
int mod[15] = {998244389, 1000005823, 563897093};
int f[15][300005], power[15][300005];
char a[300005];

void __init_hash(){
    for (int k = 0; k < len; k ++){
        power[k][0] = 1;
        for (int i = 1; i <= n; i ++){
            power[k][i] = (1LL * power[k][i - 1] * base[k]) % mod[k];
        }
        for (int i = 1; i <= n; i ++){
            f[k][i] = (1LL * f[k][i - 1] * base[k] + a[i]) % mod[k];
        }
    }
}

vector<int> query(int l, int r){
    vector<int> res;
    for (int k = 0; k < len; k ++){
        res.push_back((1LL * f[k][r] - ((1LL * f[k][l - 1] 
        * power[k][r - l + 1]) % mod[k]) + mod[k]) % mod[k]);
    }
    return res;
}

bool is_eq(int pos1, int pos2, int len){
    return query(pos1, pos1 + len - 1) == query(pos2, pos2 + len - 1);
}

bool check(int x){ // x = len
    int res = 0;
    for (int i = 1; i <= n; i ++){
        if (i + x - 1 > n) break;
        if (is_eq(1, i, x)){
            res ++;
            i = i + x - 1;
        }
    }
    return res >= itel;
}

void solve(){
    int ans = 0, l = 1, r = n;
    while (l <= r){
        int mid = (l + r) >> 1;
        if (check(mid)){
            ans = mid;
            l = mid + 1;
        }else{
            r = mid - 1;
        }
    }
    printf("%d\n", ans);
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d", &T);
    while(T --){
        scanf("%d %d %d", &n, &itel, &iter);
        scanf("%s", a + 1);
        __init_hash();
        solve();
    }

    return 0;
}