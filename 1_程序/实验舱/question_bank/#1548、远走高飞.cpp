#include<bits/stdc++.h>
using namespace std;

int n,k,cur = 1005,ans = -1000;
int x[100005],y[100005];
bool a[2015][2015];
bool vis[2015][2015];
int dis[2015][2015];
int dir[4][2] = {{1,0},{-1,0},{0,1},{0,-1}};

void bfs(){
    queue<int> qx,qy;
    qx.push(cur),qy.push(cur);
    vis[cur][cur] = 1;
    while(qx.size()){
        int x = qx.front(),y = qy.front();
        qx.pop(),qy.pop();
        for(int i = 0;i < 4;i ++){
            int tx = x + dir[i][0],ty = y + dir[i][1];
            if(tx < 0 || ty < 0 || tx >= 2010 || ty >= 2010) continue;
            if(vis[tx][ty] || a[tx][ty]) continue;
            vis[tx][ty] = 1,dis[tx][ty] = dis[x][y] + 1;
            if(dis[tx][ty] < k) qx.push(tx),qy.push(ty);
        }
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

    scanf("%d %d",&n,&k);
    for(int i = 0;i < n;i ++){
        scanf("%d",&x[i]);
    }
    for(int i = 0;i < n;i ++){
        scanf("%d",&y[i]);
        a[x[i] + cur][y[i] + cur] = 1;
    }
    bfs();
    for(int i = 0;i <= 2010;i ++){
        for(int j = 0;j <= 2010;j ++){
            if(!vis[i][j] || dis[i][j] > k) continue;
            ans = max(ans,i);
        }
    }
    printf("%d\n",ans - cur);

    return 0;
}