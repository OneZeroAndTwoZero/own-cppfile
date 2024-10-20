#include<bits/stdc++.h>
using namespace std;

struct node{
    int xi,yi;
};

int n;
int sx,sy,ex,ey;
char a[105][105];
int ans[105][105] = {0};
bool vis[105][105] = {0};
int dir[4][2] = {{0,1},{0,-1},{1,0},{-1,0}};

void bfs(){
    queue<node> q;
    q.push({sx,sy});
    while(q.size()){
        int x = q.front().xi,y = q.front().yi;
        q.pop();
        for(int i = 0;i < 4;i ++){
            int tx = x + dir[i][0],ty = y + dir[i][1];
            if(tx >= 0 && ty >= 0 && tx < n && ty < n && a[tx][ty] != a[x][y]){
                if(vis[tx][ty]) continue;
                vis[tx][ty] = 1,ans[tx][ty] = ans[x][y] + 1;
                q.push({tx,ty});
            }
        }
    }
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d ",&n);
    for(int i = 0;i < n;i ++){
        for(int j = 0;j < n;j ++){
            scanf("%c ",&a[i][j]);
            if(a[i][j] == 'A') sx = i,sy = j;
            else if(a[i][j] == 'B') ex = i,ey = j;
        }
    }
    vis[sx][sy] = 1,ans[ex][ey] = -1;
    bfs();
    printf("%d\n",ans[ex][ey]);

	return 0;
}
