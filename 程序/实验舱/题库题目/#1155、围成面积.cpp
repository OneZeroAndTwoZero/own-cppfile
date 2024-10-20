#include<bits/stdc++.h>
using namespace std;

int a[15][15] = {0};
int ans = 0;
bool vis[15][15] = {0};
int dir[4][2] = {{0,1},{0,-1},{1,0},{-1,0}};

void dfs(int x,int y){
    ans --;
    for(int i = 0;i < 4;i ++){
        int tx,ty;
        tx = x + dir[i][0];
        ty = y + dir[i][1];
        if(tx >= 0 && ty >= 0 && tx < 10 && ty < 10 && !vis[tx][ty] && !a[tx][ty]){
            vis[tx][ty] = 1;
            dfs(tx,ty);
        }
    }
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

    for(int i = 0;i < 10;i ++){
        for(int j = 0;j < 10;j ++){
            scanf("%d",&a[i][j]);
            ans += !a[i][j];
        }
    }
    for(int i = 0;i < 10;i ++){
        if(!vis[i][0] && !a[i][0]){
            vis[i][0] = 1;
            dfs(i,0);
        }
        if(!vis[i][9] && !a[i][9]){
            vis[i][9] = 1;
            dfs(i,9);
        }
        if(!vis[0][i] && !a[0][i]){
            vis[0][i] = 1;
            dfs(0,i);
        }
        if(!vis[9][i] && !a[9][i]){
            vis[9][i] = 1;
            dfs(9,i);
        }
    }
    printf("%d\n",ans);

	return 0;
}