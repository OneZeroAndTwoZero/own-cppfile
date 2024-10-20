#include<bits/stdc++.h>
using namespace std;

int n,m,sx,sy,ans = -1;
char a[505][505];
bool vis[505][505];
int dis[505][505];
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
            vis[tx][ty] = 1,dis[tx][ty] = dis[x][y] + 1;
            qx.push(tx),qy.push(ty);
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

    scanf("%d %d",&n,&m);
    for(int i = 0;i < n;i ++){
        scanf("%s",a[i]);
        for(int j = 0;j < m;j ++){
            if(a[i][j] != 'S') continue;
            sx = i,sy = j;
        }
    }
    bfs();
    for(int i = 0;i < n;i ++){
        for(int j = 0;j < m;j ++){
            if(!vis[i][j]) continue;
            if(a[i][j] != 'T') continue;
            ans = max(ans,dis[i][j]);
        }
    }
    if(ans != -1) printf("%d\n",ans);
    else printf("IMPOSSIBLE\n");

    return 0;
}