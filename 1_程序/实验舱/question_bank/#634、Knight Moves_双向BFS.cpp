#include<bits/stdc++.h>
using namespace std;

int n,l;
int sx,sy,ex,ey;
int vis[305][305];
int dis[305][305];
int dir[8][2] = {{-2,-1},{-2,1},{-1,-2},{-1,2},{2,1},{2,-1},{1,2},{1,-2}};

int bfs(){
    queue<int> qx,qy,qtype;
    qx.push(sx),qy.push(sy),qtype.push(1);
    qx.push(ex),qy.push(ey),qtype.push(2);
    vis[sx][sy] = 1,vis[ex][ey] = 2;
    while(qx.size()){
        int x = qx.front(),y = qy.front(),tp = qtype.front();
        qx.pop(),qy.pop(),qtype.pop();
        for(int i = 0;i < 8;i ++){
            int tx = x + dir[i][0],ty = y + dir[i][1];
            if(tx < 0 || ty < 0 || tx >= l || ty >= l) continue;
            if(vis[tx][ty] == 0){
                vis[tx][ty] = tp;
                dis[tx][ty] = dis[x][y] + 1;
                qx.push(tx),qy.push(ty),qtype.push(tp);
            }else if(vis[tx][ty] != tp){
                return dis[tx][ty] + dis[x][y] + 1;
            }
        }
    }
    return -1;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d",&n);
    while(n --){
        scanf("%d %d %d %d %d",&l,&sx,&sy,&ex,&ey);
        if(sx == ex && sy == ey){
            printf("0\n");
            continue;
        }
        for(int i = 0;i <= l;i ++){
            for(int j = 0;j <= l;j ++){
                vis[i][j] = dis[i][j] = 0;
            }
        }
        printf("%d\n",bfs());
    }

    return 0;
}