#include<bits/stdc++.h>
using namespace std;

int n, m, l, r, a, b;
int val[100005];
int sum[41][100005];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %d", &n, &m);
    for (int i = 1; i <= n; i ++){
        scanf("%d", &val[i]);
        for (int j = 2; j <= 15; j ++){
            sum[j][i] = (val[i] % j == 0);
        }
    }
    for (int i = 1; i <= n; i ++){
        for (int p = 2; p <= 3; p ++){
            for (int q = 3; q <= 5; q ++){
                if(q == 4) continue;
                sum[p * 10 + q][i] = sum[p][i] | sum[q][i];
            }
        }
        for (int j = 1; j <= 35; j ++){
            sum[j][i] += sum[j][i - 1];
        }
    }
    while (m --){
        scanf("%d %d %d %d", &l, &r, &a, &b);
        int res = 0;
        if(a == b){
            printf("0\n");
            continue;
        }
        if (a > b) swap(a, b);
        res += sum[a * 10 + b][r] - sum[a * 10 + b][l - 1];
        res -= sum[a * b][r] - sum[a * b][l - 1];
        printf("%d\n", res);
    }

    return 0;
}