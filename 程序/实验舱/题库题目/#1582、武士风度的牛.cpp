#include<bits/stdc++.h>
using namespace std;

struct node{
    int xi,yi,st;
};

int r,c;
char a[1005][1005];
bool vis[1005][1005] = {0};
int ans[1005][1005] = {0};
int sx,sy,ex,ey;
int dir[8][2] = {{2,1},{-2,1},{1,2},{-1,2},{2,-1},{-2,-1},{1,-2},{-1,-2}};

void bfs(){
    queue<node> q;
    q.push({sx,sy,0});
    while(q.size()){
        node p = q.front();
        q.pop();
        ans[p.xi][p.yi] = p.st;
        for(int i = 0;i < 8;i ++){
            int tx,ty;
            tx = p.xi + dir[i][0];
            ty = p.yi + dir[i][1];
            if(tx >= 0 && ty >= 0 && tx < r && ty < c && !vis[tx][ty] && a[tx][ty] != '*'){
                vis[tx][ty] = 1;
                q.push({tx,ty,p.st + 1});
            }
        }
    }
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

    scanf("%d %d",&c,&r);
    for(int i = 0;i < r;i ++){
        scanf("%s",&a[i]);
        for(int j = 0;j < c;j ++){
            if(a[i][j] == 'K'){
                sx = i,sy = j;
            }else if(a[i][j] == 'H'){
                ex = i,ey = j;
            }
        }
    }
    bfs();
    printf("%d\n",ans[ex][ey]);

	return 0;
}
