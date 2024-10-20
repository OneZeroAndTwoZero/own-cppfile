#include<bits/stdc++.h>
using namespace std;

struct node{
    int xi,yi;
};

int t,n,m,p = 0;
char a[1005][1005];
int sx,sy,ex,ey;
int posx[5],posy[5];
int vis[1005][1005];
int cnt[1005][1005];
int dir[4][2] = {{0,1},{0,-1},{1,0},{-1,0}};

bool check(int x,int y,int k){
    int d1,d2;
    d1 = abs(x - posx[0]) + abs(y - posy[0]);
    d2 = abs(x - posx[1]) + abs(y - posy[1]);
    return d1 > 2 * k && d2 > 2 * k;
}

int bfs(){
    queue<node> q;
    q.push({sx,sy});
    q.push({ex,ey});
    vis[sx][sy] = 1;
    vis[ex][ey] = 2;
    while(q.size()){
        node t = q.front();
        q.pop();
        int x = t.xi,y = t.yi;
        cout << x << " ;; " << y << "\n";
        for(int i = 0;i < 4;i ++){
            int tx = x + dir[i][0],ty = y + dir[i][1];
            if(tx < 0 || ty < 0 || tx >= n || ty >= m) continue;
            if(a[tx][ty] == 'X' || !check(tx,ty,cnt[x][y])) continue;
            cout << x << " " << y << " " << vis[x][y] << "\n";
            if(vis[x][y] * vis[tx][ty] == 2){
                return cnt[x][y] + 1;
            }else if(vis[tx][ty] == 0){
                vis[tx][ty] = vis[x][y];
                cnt[tx][ty] = cnt[x][y] + 1;
                q.push({tx,ty});
            }
        }
    }
    return -1;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d",&t);
    while(t --){
        scanf("%d %d",&n,&m);
        p = 0;
        for(int i = 0;i <= n;i ++){
            for(int j = 0;j <= m;j ++){
                vis[i][j] = 0;
            }
        }
        for(int i = 0;i < n;i ++){
            scanf("%s",a[i]);
            for(int j = 0;j < m;j ++){
                if(a[i][j] == 'M'){
                    sx = i,sy = j;
                }else if(a[i][j] == 'G'){
                    ex = i,ey = j;
                }else if(a[i][j] == 'Z'){
                    posx[p] = i,posy[p] = j;
                    p ++;
                }
            }
        }
        printf("%d\n",bfs());
    }

	return 0;
}