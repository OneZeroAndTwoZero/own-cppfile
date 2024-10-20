#include<bits/stdc++.h>
using namespace std;

int n;
int a[55][55];
bool vis[55][55] = {0};
int dir[4][2] = {{0,1},{0,-1},{1,0},{-1,0}};

void dfs(int x,int y){
    a[x][y] = 0;
    for(int i = 0;i < 4;i ++){
        int tx,ty;
        tx = x + dir[i][0];
        ty = y + dir[i][1];
        if(tx >= 0 && ty >= 0 && tx < n && ty < n && !vis[tx][ty] && a[tx][ty] == 2){
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

    scanf("%d",&n);
    for(int i = 0;i < n;i ++){
        for(int j = 0;j < n;j ++){
            scanf("%d",&a[i][j]);
            if(a[i][j] == 0){
                a[i][j] = 2;
            }
        }
    }
    for(int i = 0;i < n;i ++){
        if(!vis[i][0] && a[i][0] == 2){
            vis[i][0] = 1;
            dfs(i,0);
        }
        if(!vis[i][n - 1] && a[i][n - 1] == 2){
            vis[i][n - 1] = 1;
            dfs(i,n - 1);
        }
        if(!vis[0][i] && a[0][i] == 2){
            vis[0][i] = 1;
            dfs(0,i);
        }
        if(!vis[n - 1][i] && a[n - 1][i] == 2){
            vis[n - 1][i] = 1;
            dfs(n - 1,i);
        }
    }
    for(int i = 0;i < n;i ++){
        for(int j = 0;j < n;j ++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

	return 0;
}