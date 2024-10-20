#include<bits/stdc++.h>
using namespace std;

struct node{
    int xi,yi;
};

int n,m,sx,sy;
int ans[405][405];
int dir[8][2] = {{1,2},{1,-2},{-1,2},{-1,-2},{2,1},{2,-1},{-2,1},{-2,-1}};

void bfs(){
    queue<node> q;
    q.push({sx,sy});
    ans[sx][sy] = 1;
    while(q.size()){
        int x = q.front().xi,y = q.front().yi;
        q.pop();
        for(int i = 0;i < 8;i ++){
            int tx = x + dir[i][0],ty = y + dir[i][1];
            if(tx < 1 || ty < 1 || tx > n || ty > m) continue;
            if(ans[tx][ty]) continue;
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

    scanf("%d %d %d %d",&n,&m,&sx,&sy);
    bfs();
    for(int i = 1;i <= n;i ++){
        for(int j = 1;j <= m;j ++)
            printf("%-5d",-- ans[i][j]);
        printf("\n");
    }

	return 0;
}