#include<bits/stdc++.h>
using namespace std;

int n,m,sx,sy,ans = 0;
int dir[8][2] = {{2,1},{-2,1},{2,-1},{-2,-1},
{1,2},{-1,2},{1,-2},{-1,-2}};
bool vis[15][15];

void dfs(int x,int y,int st){
    if(st == n * m){
        ans ++;
        return;
    }
    for(int i = 0;i < 8;i ++){
        int tx = x + dir[i][0],ty = y + dir[i][1];
        if(tx < 0 || ty < 0 || tx >= n || ty >= m) continue;
        if(vis[tx][ty]) continue;
        vis[tx][ty] = 1;
        dfs(tx,ty,st + 1);
        vis[tx][ty] = 0; 
    }
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d %d %d %d",&n,&m,&sx,&sy);
    vis[sx][sy] = 1;
    dfs(sx,sy,1);
    printf("%d\n",ans);

	return 0;
}