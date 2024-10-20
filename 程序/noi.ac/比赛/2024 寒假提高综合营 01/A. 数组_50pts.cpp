#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

int n,ans = 0;
int a[100005];
int sum[100005][15];

bool check(int l,int r){
    for(int i = 1;i <= 10;i ++){
        int cur = sum[r][i] - sum[l - 1][i];
        if(cur > (r - l + 1) / 2) return 1;
    }
    return 0;
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
        for(int j = 1;j <= 10;j ++){
            sum[i][j] = sum[i - 1][j];
        }
        sum[i][a[i]] ++;
    }
    ans = n;
    for(int i = 1;i <= n;i ++){
        for(int j = i + 1;j <= n;j ++){
            if(check(i,j)) ans ++;
        }
    }
    printf("%d\n",ans);

    return 0;
}