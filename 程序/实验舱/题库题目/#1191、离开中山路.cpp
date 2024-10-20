#include<bits/stdc++.h>
using namespace std;

struct node{
    int xi,yi;
};

int n,sx,sy,ex,ey;
char a[1005][1005];
int ans[1005][1005];
int dir[4][2] = {{0,1},{0,-1},{1,0},{-1,0}};

void bfs(){
    queue<node> q;
    q.push({sx,sy});
    ans[sx][sy] = 1;
    while(q.size()){
        int x = q.front().xi,y = q.front().yi;
        q.pop();
        for(int i = 0;i < 4;i ++){
            int tx = x + dir[i][0],ty = y + dir[i][1];
            if(tx < 0 || ty < 0 || tx >= n || ty >= n) continue;
            if(a[tx][ty] == '1' || ans[tx][ty]) continue;
            ans[tx][ty] = ans[x][y] + 1;
            q.push({tx,ty});
        }
    }
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d",&n);
    for(int i = 0;i < n;i ++)
        scanf("%s",a[i]);
    scanf("%d %d %d %d",&sx,&sy,&ex,&ey);
    -- sx,-- sy,-- ex,-- ey;
    bfs();
    printf("%d\n",-- ans[ex][ey]);

	return 0;
}