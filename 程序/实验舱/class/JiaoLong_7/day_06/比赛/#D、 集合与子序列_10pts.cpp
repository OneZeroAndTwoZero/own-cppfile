#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

int n,t,ans = 0;
int cnt[105][105];
int cur[105];

void dfs(int k){
    if(k == n){
        for(int i = 0;i <= 100;i ++){
            if(cur[i] & 1) return;
        }
        ans ++;
        return;
    }
    for(int i = 0;i <= 100;i ++){
        cur[i] += cnt[k][i];
    }
    dfs(k + 1);
    for(int i = 0;i <= 100;i ++){
        cur[i] -= cnt[k][i];
    }
    dfs(k + 1);
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
    for(int i = 0;i < n;i ++){
        scanf("%d",&t);
        for(int j = 2;j <= t;j ++){
            if(t % j) continue;
            while(t % j == 0){
                cnt[i][j] ++;
                t /= j;
            }
        }
    }
    dfs(0);
    printf("%d\n",ans - 1);

    return 0;
}