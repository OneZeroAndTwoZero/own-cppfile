#include<bits/stdc++.h>
using namespace std;

struct node{
    int xi,yi;
};

int n = 5;
int a[15][15];
bool vis[15][15];
node ans[15][15];
int dir[4][2] = {{0,1},{0,-1},{1,0},{-1,0}};

void bfs(){
    queue<node> q;
    q.push({0,0});
    while(q.size()){
        node t = q.front();
        q.pop();
        for(int i = 0;i < 4;i ++){
            int tx = t.xi + dir[i][0],ty = t.yi + dir[i][1];
            if(tx < 0 || ty < 0 || tx >= n || ty >= n){
                continue;
            }
            if(vis[tx][ty] || a[tx][ty]) continue;
            vis[tx][ty] = 1;
            ans[tx][ty] = {t.xi,t.yi};
            q.push({tx,ty});
        }
    }
}

void out(int x,int y){
    if(x == 0 && y == 0){
        printf("(%d, %d)\n",x,y);
        return;
    }
    out(ans[x][y].xi,ans[x][y].yi);
    printf("(%d, %d)\n",x,y);
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    for(int i = 0;i < n;i ++){
        for(int j = 0;j < n;j ++){
            scanf("%d",&a[i][j]);
        }
    }
    bfs();
    out(4,4);

	return 0;
}