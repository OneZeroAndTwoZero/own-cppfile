#include<bits/stdc++.h>
using namespace std;

int n = 100,m = 100,sx,sy;
bool vis[105][105];
int dis[105][105];
int dir[12][2] = {{2,1},{2,-1},{-2,1},{-2,-1},{1,2},{1,-2}
                ,{-1,2},{-1,-2},{2,2},{2,-2},{-2,2},{-2,-2}};

void bfs(){
    queue<int> qx,qy;
    qx.push(sx),qy.push(sy);
    vis[sx][sy] = 1;
    while(qx.size()){
        int x = qx.front(),y = qy.front();
        qx.pop(),qy.pop();
        for(int i = 0;i < 12;i ++){
            int tx = x + dir[i][0],ty = y + dir[i][1];
            if(tx <= 0 || ty <= 0 || tx >= n || ty >= m) continue;
            if(vis[tx][ty]) continue;
            vis[tx][ty] = 1,dis[tx][ty] = dis[x][y] + 1;
            qx.push(tx),qy.push(ty);
        }
    }
}

void __init(){
    for(int i = 0;i <= 100;i ++){
        for(int j = 0;j <= 100;j ++){
            vis[i][j] = 0;
            dis[i][j] = 0;
        }
    }
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    for(int i = 0;i < 2;i ++){
        scanf("%d %d",&sx,&sy);
        __init();
        bfs();
        printf("%d\n",dis[1][1]);
    }

    return 0;
}