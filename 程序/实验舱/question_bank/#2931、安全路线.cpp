#include<bits/stdc++.h>
using namespace std;

struct node{
    int idx,ri;
    bool operator < (const node &a) const{
        return ri < a.ri;
    }
};

int n,q,u,v,x;
node a[205];
int f[205],t[205][205],dp[205][205][205];

int search(int x){
    for(int i = 0;i < n;i ++){
        if(a[i + 1].ri > x) return i;
    }
    return n;
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
        scanf("%d",&a[i].ri);
        a[i].idx = i;
    }
    sort(a + 1,a + n + 1);
    for(int i = 1;i <= n;i ++){
        f[a[i].idx] = i;
    }
    for(int i = 1;i <= n;i ++){
        for(int j = 1;j <= n;j ++){
            scanf("%d",&t[i][j]);
            dp[0][f[i]][f[j]] = t[i][j];
        }
    }
    for(int k = 1;k <= n;k ++){
        for(int i = 1;i <= n;i ++){
            for(int j = 1;j <= n;j ++){
                dp[k][i][j] = min(dp[k - 1][i][j],dp[k - 1][i][k] + dp[k - 1][k][j]);
            }
        }
    }
    scanf("%d",&q);
    while(q --){
        scanf("%d %d %d",&u,&v,&x);
        printf("%d\n",dp[search(x)][f[u]][f[v]]);
    }

    return 0;
}