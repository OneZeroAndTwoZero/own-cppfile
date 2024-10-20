#include<bits/stdc++.h>
using namespace std;

int t,n;
int sx,sy,ex,ey;
int a[305][305];
bool vis[305][305];
int dir[8][2] = {{2,1},{2,-1},{-2,1},{-2,-1},{1,2},{1,-2},{-1,2},{-1,-2}};

void __init(){
    for(int i = 0;i <= n;i ++)
        for(int j = 0;j <= n;j ++)
            vis[i][j] = a[i][j] = 0;
}

void bfs(){
    vis[sx][sy] = 1;
    queue<int> qx,qy;
    qx.push(sx),qy.push(sy);
    while(qx.size()){
        int x = qx.front(),y = qy.front();
        qx.pop(),qy.pop();
        for(int i = 0;i < 8;i ++){
            int tx = x + dir[i][0],ty = y + dir[i][1];
            if(tx < 0 || ty < 0 || tx >= n || ty >= n) continue;
            if(vis[tx][ty]) continue;
            vis[tx][ty] = 1;
            a[tx][ty] = a[x][y] + 1;
            qx.push(tx),qy.push(ty);
        }
    }
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d",&t);
    while(t --){
        scanf("%d",&n);
        scanf("%d %d %d %d",&sx,&sy,&ex,&ey);
        __init();
        bfs();
        printf("%d\n",a[ex][ey]);
    }

	return 0;
}