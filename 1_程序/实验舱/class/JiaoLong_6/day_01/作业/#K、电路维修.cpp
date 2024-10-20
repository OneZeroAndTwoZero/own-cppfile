#include<bits/stdc++.h>
using namespace std;

struct node{
    int x,y;
};

int t,r,c,ans[505][505];
char a[505][505];
int dir[4][2] = {{-1,1},{-1,-1},{1,1},{1,-1}};
int f[4][2] = {{-1,0},{-1,-1},{0,0},{0,-1}};

bool vis[505][505];

void __init(){
    for(int i = 0;i <= r;i ++){
        for(int j = 0;j <= c;j ++){
            vis[i][j] = 0;
            ans[i][j] = 0x3f3f3f3f;
        }
    }
}

void bfs(){
    deque<node> q;
    q.push_back({0,0});
    vis[0][0] = 1;
    ans[0][0] = 0;
    while(q.size()){
        node t = q.front();
        q.pop_front();
        int x = t.x,y = t.y;
        vis[x][y] = 1;
        if(x == r && y == c) return;
        for(int i = 0;i < 4;i ++){
            int tx = x + dir[i][0],ty = y + dir[i][1];
            int fx = x + f[i][0],fy = y + f[i][1];
            if(tx < 0 || ty < 0 || tx > r || ty > c) continue;
            if(vis[tx][ty]) continue;
            if((i == 0 || i == 3) && a[fx][fy] == '/'
            || (i == 1 || i == 2) && a[fx][fy] == '\\'){
                q.push_front({tx,ty});
                ans[tx][ty] = min(ans[tx][ty],ans[x][y]);
            }else{
                q.push_back({tx,ty});
                ans[tx][ty] = min(ans[tx][ty],ans[x][y] + 1);
            }
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
        for(int i = 0;i < r;i ++)
            scanf("%s",a[i]);
        __init();
        bfs();
        if(vis[r][c]) printf("%d\n",ans[r][c]);
        else printf("NO SOLUTION\n");
    }

	return 0;
}