#include<bits/stdc++.h>
using namespace std;

int n,ans = 0;
int t[105];
bool vis[305][305];
bool operate[35][15][305][305];
int dir[8][2] = {{0,1},{1,1},{1,0},{1,-1},{0,-1},{-1,-1},{-1,0},{-1,1}};

void dfs(int r,int d,int x,int y){
    // cout << x << " " << y << "\n";
    if(r == n){
        return;
    }
    if(operate[r][d][x][y]) return;
    operate[r][d][x][y] = 1;
    for(int i = 0;i < t[r];i ++){
        // cout << x << " " << y << "[]\n";
        vis[x][y] = 1;
        x += dir[d][0],y += dir[d][1];
    }
    x -= dir[d][0],y -= dir[d][1];
    int d1 = (d + 1) % 8,d2 = (d - 1 + 8) % 8;
    dfs(r + 1,d1,x + dir[d1][0],y + dir[d1][1]);
    dfs(r + 1,d2,x + dir[d2][0],y + dir[d2][1]);
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d",&n);
    for(int i = 0;i < n;i ++){
        scanf("%d",&t[i]);
    }
    dfs(0,6,151,151);
    for(int i = 0;i < 302;i ++){
        for(int j = 0;j < 302;j ++){
            if(vis[i][j]) ans ++;
        }
    }
    printf("%d\n",ans);

	return 0;
}