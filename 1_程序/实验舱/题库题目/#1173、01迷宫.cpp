#include<bits/stdc++.h>
using namespace std;

int n,m,pos = 0;
int x,y;
bool vis[1005][1005];
char a[1005][1005];
int f[1005][1005];
int ans[1005005];
int dir[4][2] = {{0,1},{0,-1},{1,0},{-1,0}};

void dfs(int x,int y){
    f[x][y] = pos;
    ans[pos] ++;
    for(int i = 0;i < 4;i ++){
        int tx = x + dir[i][0],ty = y + dir[i][1];
        if(tx >= 0 && ty >= 0 && tx < n && ty < n && a[tx][ty] != a[x][y]){
            if(vis[tx][ty] == 1) continue;
            vis[tx][ty] = 1;
            dfs(tx,ty);
        }
    }
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d %d",&n,&m);
    for(int i = 0;i < n;i ++) scanf("%s",a[i]);
    for(int i = 0;i < n;i ++){
        for(int j = 0;j < n;j ++){
            if(vis[i][j]) continue;
            vis[i][j] = 1;
            dfs(i,j);
            pos ++;
        }
    }
    while(m --){
        scanf("%d %d",&x,&y);
        printf("%d\n",ans[f[-- x][-- y]]);
    }

	return 0;
}