#include<bits/stdc++.h>
using namespace std;

struct node{
    int xi,yi;
    bool operator < (const node &a) const{
        if(xi != a.xi) return xi < a.xi;
        return yi < a.yi;
    }
};

int n,k,ans = 0;
node a[1005];
int dp[505][105];

int dir(int x1,int y1,int x2,int y2){
    return abs(x1 - x2) + abs(y1 - y2) - 1;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d %d",&n,&k);
    for(int i = 1;i <= n;i ++){
        scanf("%d %d",&a[i].xi,&a[i].yi);
    }
    sort(a + 1,a + n + 1);
    for(int i = 1;i <= n;i ++){
        for(int l = 0;l <= k;l ++) dp[i][l] = 1;
        for(int j = 1;j < i;j ++){
            if(a[j].yi > a[i].yi) continue;
            int d = dir(a[i].xi,a[i].yi,a[j].xi,a[j].yi);
            for(int l = k;l >= d;l --){
                dp[i][l - d] = max(dp[i][l - d],dp[j][l] + d + 1);
            }
        }
    }
    for(int i = 1;i <= n;i ++){
        for(int l = 0;l <= k;l ++){
            ans = max(ans,dp[i][l] + l);
        }
    }
    printf("%d\n",ans);

	return 0;
}
