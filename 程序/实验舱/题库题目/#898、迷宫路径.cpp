#include<bits/stdc++.h>
using namespace std;

struct node{
    int xi,yi;
};

int n,m;
int sx,sy,ex,ey;
char a[1005][1005] = {0};
char ans[1005][1005] = {0};
int st[1005][1005] = {0};
bool vis[1005][1005] = {0};
int dir[4][2] = {{1,0},{0,-1},{0,1},{-1,0}};
char d[15] = "DLRU";

void out(int x,int y){
    if(x == sx && y == sy) return;
    if(ans[x][y] == 'D') out(x - 1,y);
    else if(ans[x][y] == 'L') out(x,y + 1);
    else if(ans[x][y] == 'R') out(x,y - 1);
    else out(x + 1,y);
    printf("%c",ans[x][y]);
}

void bfs(){
    queue<node> q;
    q.push({sx,sy});
    while(q.size()){
        node tem = q.front();
        q.pop();
        for(int i = 0;i < 4;i ++){
            int tx = tem.xi + dir[i][0],ty = tem.yi + dir[i][1];
            if(tx >= 0 && ty >= 0 && tx < n && ty < m && a[tx][ty] != '#'){
                if(vis[tx][ty]) continue;
                st[tx][ty] = st[tem.xi][tem.yi] + 1;
                vis[tx][ty] = 1,ans[tx][ty] = d[i];
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

    scanf("%d %d",&n,&m);
    for(int i = 0;i < n;i ++){
        scanf("%s",a[i]);
        for(int j = 0;j < m;j ++){
            if(a[i][j] == 'A') sx = i,sy = j;
            else if(a[i][j] == 'B') ex = i,ey = j;   
        }
    }
    bfs();
    if(st[ex][ey] == 0){
        printf("NO\n");
    }else{
        printf("YES\n");
        printf("%d\n",st[ex][ey]);
        out(ex,ey);
    }

	return 0;
}