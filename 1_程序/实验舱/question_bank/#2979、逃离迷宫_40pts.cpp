#include<bits/stdc++.h>
using namespace std;

int n,m,t;
int sx,sy,ex,ey;
char a[15][15];
int dir[4][2] = {{1,0},{-1,0},{0,1},{0,-1}};
bool vis[15][15],ans;

void dfs(int x,int y,int ti){
    if(ans) return;
    if(a[x][y] == 'D' && ti == t){
        ans = 1;
        return;
    }
    if(abs(x - ex) + abs(y - ey) + ti > t) return;
    vis[x][y] = 1;
    for(int i = 0;i < 4;i ++){
        int tx = x + dir[i][0],ty = y + dir[i][1];
        if(tx < 0 || ty < 0 || tx >= n || ty >= m) continue;
        if(vis[tx][ty] || a[tx][ty] == 'X') continue;
        dfs(tx,ty,ti + 1);
    }
    vis[x][y] = 0;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    while(cin >> n >> m >> t){
        if(!n && !m && !t) break;
        for(int i = 0;i < n;i ++){
            cin >> a[i];
            for(int j = 0;j < m;j ++){
                if(a[i][j] == 'S') sx = i,sy = j;
                if(a[i][j] == 'D') ex = i,ey = j;
            }
        }
        ans = 0;
        memset(vis,0,sizeof(vis));
        dfs(sx,sy,0);
        if(ans) printf("YES\n");
        else printf("NO\n");
    }

    return 0;
}