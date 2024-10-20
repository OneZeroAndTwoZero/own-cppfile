#include<bits/stdc++.h>
using namespace std;

int n,r,ans;
int maxx,maxy;
int x,y,v;
int sum[5005][5005];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d %d",&n,&r);
    for(int i = 0;i < n;i ++){
        scanf("%d %d %d",&x,&y,&v);
        sum[++ x][++ y] += v;
        maxx = max(maxx,x);
        maxy = max(maxy,y);
    }
    for(int i = 1;i <= max(maxx,r) + 1;i ++){
        for(int j = 1;j <= max(maxy,r) + 1;j ++){
            sum[i][j] += sum[i - 1][j] + sum[i][j - 1] - sum[i - 1][j - 1];
            if(i >= r && j >= r)
                ans = max(ans,sum[i][j] - sum[i - r][j] - sum[i][j - r] + sum[i - r][j - r]);
        }
    }
    printf("%d\n",ans);

	return 0;
}
