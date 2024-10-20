#include<bits/stdc++.h>
using namespace std;

struct node{
    int xi,yi;
};

int n = 25,m = 25,sx,sy;
int ans[105][105];
int dir[12][2] = {{1,2},{1,-2},{-1,2},{-1,-2}
                ,{2,1},{2,-1},{-2,1},{-2,-1}
                ,{2,2},{2,-2},{-2,2},{-2,-2}};

void __init(){
    for(int i = 0;i < n;i ++)
        for(int j = 0;j < m;j ++)
            ans[i][j] = 0;
}

void bfs(){
    queue<node> q;
    q.push({sx,sy});
    ans[sx][sy] = 1;
    while(q.size()){
        int x = q.front().xi,y = q.front().yi;
        q.pop();
        for(int i = 0;i < 12;i ++){
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

    for(int i = 0;i < 2;i ++){
        __init();
        scanf("%d %d",&sx,&sy);
        bfs();
        printf("%d\n",-- ans[1][1]);
    }

	return 0;
}