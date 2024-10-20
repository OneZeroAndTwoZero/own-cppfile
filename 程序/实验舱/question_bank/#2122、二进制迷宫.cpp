#include<bits/stdc++.h>
using namespace std;

struct node{
    int xi,yi;
};

int n,m,sx,sy,ex,ey;
int a[505][505];
bool vis[505][505];
int dis[505][505];
int dir[4][2] = {{1,0},{-1,0},{0,1},{0,-1}};
int pown[4] = {4,1,2,8};

void bfs(){
    queue<node> q;
    vis[sx][sy] = 1;
    q.push({sx,sy});
    while(q.size()){
        node t = q.front();
        q.pop();
        int x = t.xi,y = t.yi;
        for(int i = 0;i < 4;i ++){
            if(a[x][y] & pown[i]) continue;
            int tx = x + dir[i][0],ty = y + dir[i][1];
            if(tx < 0 || ty < 0 || tx >= n || ty >= m) continue;
            if(vis[tx][ty]) continue;
            dis[tx][ty] = dis[x][y] + 1;
            vis[tx][ty] = 1;
            q.push({tx,ty});
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
        for(int j = 0;j < m;j ++){
            scanf("%d",&a[i][j]);
        }
    }
    scanf("%d %d %d %d",&sx,&sy,&ex,&ey);
    -- sx,-- sy,-- ex,-- ey;
    bfs();
    if(!vis[ex][ey]) printf("-1\n");
    else printf("%d\n",dis[ex][ey]);

    return 0;
}