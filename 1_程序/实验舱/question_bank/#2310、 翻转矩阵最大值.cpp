#include<bits/stdc++.h>
using namespace std;

int n, m;
long long ans = 0;
int a[105][105];

void operate_r(int x){
    for (int i = 1; i <= m; i ++){
        a[x][i] = !a[x][i];
    }
}

void operate_c(int x){
    for (int i = 1; i <= n; i ++){
        a[i][x] = !a[i][x];
    }
}

long long cal(int x){
    long long res = 0;
    for (int i = 1; i <= m; i ++){
        res += a[x][i] * (1LL << (m - i));
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

    scanf("%d %d", &n, &m);
    for (int i = 1; i <= n; i ++){
        for (int j = 1; j <= m; j ++){
            scanf("%d", &a[i][j]);
        }
        if (!a[i][1]) operate_r(i);
    }
    for (int i = 2; i <= m; i ++){
        int cnt = 0;
        for (int j = 1; j <= n; j ++){
            if (!a[j][i]) cnt ++;
        }
        if (cnt > n / 2) operate_c(i);
    }
    for (int i = 1; i <= n; i ++){
        ans += cal(i);
    }
    printf("%lld\n", ans);

    return 0;
}