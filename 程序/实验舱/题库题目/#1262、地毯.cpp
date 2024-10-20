#include<bits/stdc++.h>
using namespace std;

int n,m;
int sx,sy,ex,ey;
int ans[1005][1005];

void operate(){
    ans[sx][sy] ++;
    ans[ex + 1][sy] --;
    ans[sx][ey + 1] --;
    ans[ex + 1][ey + 1] ++;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d %d",&n,&m);
    while(m --){
        scanf("%d %d %d %d",&sx,&sy,&ex,&ey);
        operate();
    }
    for(int i = 1;i <= n;i ++)
        for(int j = 1;j <= n;j ++){
            ans[i][j] += ans[i - 1][j] + ans[i][j - 1] - ans[i - 1][j - 1];
            printf("%d%c",ans[i][j]," \n"[j == n]);
        }

	return 0;
}