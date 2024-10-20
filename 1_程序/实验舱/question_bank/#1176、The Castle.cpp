#include<bits/stdc++.h>
using namespace std;

int n,m,ans = 0,cnt,maxn = 0;
int a[105][105];
bool vis[105][105];
int dir[4][2] = {{0,-1},{-1,0},{0,1},{1,0}};

void dfs(int x,int y){
    cnt ++;
    for(int i = 0;i < 4;i ++){
        if(a[x][y] & (1 << i)) continue;
        int tx = x + dir[i][0],ty = y + dir[i][1];
        if(tx < 0 || ty < 0 || tx >= n || ty >= m) continue;
        if(vis[tx][ty]) continue;
        vis[tx][ty] = 1;
        dfs(tx,ty);
    }
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %d",&n,&m);
    for(int i = 0;i < n;i ++){
        for(int j = 0;j < m;j ++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i = 0;i < n;i ++){
        for(int j = 0;j < m;j ++){
            if(vis[i][j]) continue;
            vis[i][j] = 1;
            ans ++,cnt = 0;
            dfs(i,j);
            maxn = max(maxn,cnt);
        }
    }
    printf("%d\n%d\n",ans,maxn);

    return 0;
}