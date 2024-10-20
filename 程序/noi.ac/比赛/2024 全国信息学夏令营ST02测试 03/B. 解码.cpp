#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

long long x;
int n, len = 1;
int base[4] = {127, 131, 137};
int mod[4] = {998244389, 1000005823, 563897093};
int f[3][4][1000006], power[4][1000006];
string a;

void __init_hash(){
    for (int k = 0; k < len; k ++){
        power[k][0] = 1;
        for (int i = 1; i <= 2 * n; i ++)
            power[k][i] = (1LL * power[k][i - 1] * base[k]) % mod[k];
        for (int i = 1; i <= 2 * n; i ++)
            f[1][k][i] = (1LL * f[1][k][i - 1] * base[k] + a[i]) % mod[k];
        for (int i = 2 * n; i >= 1; i --)
            f[2][k][i] = (1LL * f[2][k][i + 1] * base[k] + a[i]) % mod[k];
    }
}

vector<int> query(int ty, int l, int r){
    // cout << ty << ";;;;;;;;;;" << l << " " << r << "\n";
    vector<int> res;
    if (l > r){
        for (int i = 0; i < len; i ++) res.push_back(0);
        return res;
    }
    for (int k = 0; k < len; k ++){
        if (ty == 1){
            res.push_back((1LL * f[1][k][r] - ((1LL * f[1][k][l - 1] 
            * power[k][r - l + 1]) % mod[k]) + mod[k]) % mod[k]);
        }else{
            res.push_back((1LL * f[2][k][l] - ((1LL * f[2][k][r + 1] 
            * power[k][r - l + 1]) % mod[k]) + mod[k]) % mod[k]);
        }
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

    cin >> n >> a;
    reverse(a.begin(), a.end());
    a.push_back('0');
    reverse(a.begin(), a.end());
    __init_hash();
    // cout << a << " " << n << "\n";
    for (int i = 0; i <= n; i ++){
        vector<int> cur = query(2, i + 1, i + n);
        vector<int> tem = query(1, 1, i);
        vector<int> temp = query(1, i + n + 1, 2 * n);
        // cout << i + 1 << " [][] " << i + n << "\n";
        // cout << 1 << " [][] " << i << "\n";
        // cout << i + n + 1 << " [][] " << 2 * n << "\n";
        // cout << cur.size() << tem.size() << temp.size() << "\n";
        // cout << i << "[]\n";
        // for (int k = 0; k < len; k ++){
        //     cout << cur[k] << " " << tem[k] << " " << temp[k] << "\n";
        // }
        for (int k = 0; k < len; k ++){
            // cout << k << "[]\n";
            tem[k] = (1LL * tem[k] * power[k][n - i]) % mod[k];
            tem[k] = (tem[k] + temp[k]) % mod[k];
        }
        if (tem != cur) continue;
        for (int j = i + n; j > i; j --){
            printf("%c", a[j]);
        }
        printf("\n%d\n", i);
        return 0;
    }
    printf("-1\n");

    return 0;
}
