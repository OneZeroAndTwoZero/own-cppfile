#include<bits/stdc++.h>
using namespace std;

int n,m;
int sx,sy,ex,ey;
char a[105][105];
int ans[105][105];
bool vis[105][105];
int dir[4][2] = {{0,1},{0,-1},{1,0},{-1,0}};

void bfs(){
    queue<int> qx,qy;
    qx.push(sx),qy.push(sy);
    vis[sx][sy] = 1;
    while(qx.size()){
        int x = qx.front(),y = qy.front();
        qx.pop(),qy.pop();
        for(int i = 0;i < 4;i ++){
            int tx = x + dir[i][0],ty = y + dir[i][1];
            if(tx < 0 || ty < 0 || tx >= n || ty >= m) continue;
            if(a[tx][ty] == '#' || vis[tx][ty]) continue;
            vis[tx][ty] = 1;
            ans[tx][ty] = ans[x][y] + 1;
            qx.push(tx),qy.push(ty);
        }
    }
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d %d",&n,&m);
    for(int i = 0;i < n;i ++){
        scanf("%s",a[i]);
        for(int j = 0;j < m;j ++){
            if(a[i][j] == 'S') sx = i,sy = j;
            else if(a[i][j] == 'T') ex = i,ey = j;
        }
    }
    bfs();
    printf("%d\n",ans[ex][ey]);

	return 0;
}