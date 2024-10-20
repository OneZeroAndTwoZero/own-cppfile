#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

int n;
int c[100005];
int a[100005],b[100005];
int cnta[100005],cntb[100005];
long long ans = 0,mod = 666623333;

void dfs(int k){
    if(k == n + 1){
        ans ++;
        return;
    }
    for(int i = 1;i <= n;i ++){
        if(cnta[i]) continue;
        for(int j = 1;j <= n;j ++){
            if(cntb[j]) continue;
            if(i - j > c[k]) continue;
            cnta[i] = cntb[j] = 1;
            a[k] = i,b[k] = j;
            dfs(k + 1);
            cnta[i] = cntb[j] = 0;
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

    scanf("%d",&n);
    for(int i = 1;i <= n;i ++){
        scanf("%d",&c[i]);
    }
    dfs(1);
    printf("%lld\n",ans % mod);

    return 0;
}