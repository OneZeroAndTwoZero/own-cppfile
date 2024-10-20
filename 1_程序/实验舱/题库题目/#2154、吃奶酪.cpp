#include<bits/stdc++.h>
using namespace std;

int n,m;
int a[105][105];
int ans[105][105];
int dir[4][2] = {{0,1},{0,-1},{1,0},{-1,0}};

int dfs(int x,int y){
    if(ans[x][y]) return ans[x][y];
    for(int k = 1;k <= m;k ++){
        for(int i = 0;i < 4;i ++){
            int tx = x + dir[i][0] * k;
            int ty = y + dir[i][1] * k;
            if(tx >= 0 && ty >= 0 && tx < n && ty < n){
                if(a[tx][ty] <= a[x][y]) continue;
                ans[x][y] = max(ans[x][y],dfs(tx,ty));
            }
        }
    }
    ans[x][y] += a[x][y];
    return ans[x][y];
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d %d",&n,&m);
    for(int i = 0;i < n;i ++)
        for(int j = 0;j < n;j ++)
            scanf("%d",&a[i][j]);
    printf("%d\n",dfs(0,0));

	return 0;
}