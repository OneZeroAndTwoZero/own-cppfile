#include<bits/stdc++.h>
using namespace std;

struct node{
    int xi,yi;
};

int n,m;
int sx,sy,ex,ey;
char a[1005][1005];
bool vis[1005][1005];
int ans[1005][1005];
int dir[4][2] = {{0,1},{0,-1},{1,0},{-1,0}};
vector<node> to;

void bfs(){
    deque<node> q;
    q.push_back({sx,sy});
    vis[sx][sy] = 1;
    while(q.size()){
        int x = q.front().xi,y = q.front().yi;
        q.pop_front();
        if(a[x][y] == '*'){
            for(int i = to.size() - 1;i >= 0;i --){
                if(!vis[to[i].xi][to[i].yi]){
                    vis[to[i].xi][to[i].yi] = 1;
                    ans[to[i].xi][to[i].yi] = ans[x][y];
                    q.push_front({to[i].xi,to[i].yi});
                }
                to.pop_back();
            }
        }
        for(int i = 0;i < 4;i ++){ 
            int tx = x + dir[i][0],ty = y + dir[i][1];
            if(tx < 0 || ty < 0 || tx >= n || ty >= m) continue;
            if(a[tx][ty] == '#' || vis[tx][ty]) continue;
            vis[tx][ty] = 1,ans[tx][ty] = ans[x][y] + 1;
            q.push_back({tx,ty});
        }
    }
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d %d",&n,&m);
    for(int i = 0;i < n;i ++){
        scanf("%s",a[i]);
        for(int j = 0;j < m;j ++){
            if(a[i][j] == 'S') sx = i,sy = j;
            if(a[i][j] == 'T') ex = i,ey = j;
            if(a[i][j] == '*') to.push_back({i,j});
        }
    }
    bfs();
    if(vis[ex][ey]) printf("%d\n",ans[ex][ey]);
    else printf("IMPOSSIBLE\n");

	return 0;
}