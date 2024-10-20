#include<bits/stdc++.h>
using namespace std;

struct node{
    int xi,yi;
};

int t,r,c;
int sx,sy,ex,ey;
char a[205][205];
int ans[205][205];
int dir[4][2] = {{0,1},{0,-1},{1,0},{-1,0}};

void __init(){
    for(int i = 0;i <= r;i ++){
        for(int j = 0;j <= c;j ++){
            ans[i][j] = 0;
        }
    }
}

void bfs(){
    __init();
    queue<node> q;
    q.push({sx,sy});
    ans[sx][sy] = 1;
    while(q.size()){
        int x = q.front().xi,y = q.front().yi;
        q.pop();
        for(int i = 0;i < 4;i ++){
            int tx = x + dir[i][0],ty = y + dir[i][1];
            if(tx < 0 || ty < 0 || tx >= r || ty >= c) continue;
            if(a[tx][ty] == '#' || ans[tx][ty]) continue;
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

    scanf("%d",&t);
    while(t --){
        scanf("%d %d",&r,&c);
        for(int i = 0;i < r;i ++){
            scanf("%s",a[i]);
            for(int j = 0;j < c;j ++){
                if(a[i][j] == 'S') sx = i,sy = j;
                if(a[i][j] == 'E') ex = i,ey = j;
            }
        }
        bfs();
        if(ans[ex][ey]) printf("%d\n",-- ans[ex][ey]);
        else printf("oop!\n");
    }

	return 0;
}