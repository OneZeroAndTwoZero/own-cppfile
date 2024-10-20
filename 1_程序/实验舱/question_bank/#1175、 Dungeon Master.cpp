#include<bits/stdc++.h>
using namespace std;

struct node{
    int x, y, z;
};

int n, m, k;
int sx, sy, sz, ex, ey, ez;
string s[105][105];
bool vis[105][105][105];
int dis[105][105][105];
int dir[6][3] = {{1, 0, 0}, {-1, 0, 0}, {0, 1, 0}, {0, -1, 0}, {0, 0, 1}, {0, 0, -1}};

void bfs(){
    queue<node> q;
    q.push({sx, sy, sz});
    vis[sx][sy][sz] = 1;
    while (q.size()){
        node cur = q.front();
        q.pop();
        for (int i = 0; i < 6; i ++){
            int tx = cur.x + dir[i][0];
            int ty = cur.y + dir[i][1];
            int tz = cur.z + dir[i][2];
            if (tx < 0 || ty < 0 || tz < 0) continue;
            if (tx >= n || ty >= m || tz >= k) continue;
            if(vis[tx][ty][tz] || s[tx][ty][tz] == '#') continue;
            vis[tx][ty][tz] = 1;
            dis[tx][ty][tz] = dis[cur.x][cur.y][cur.z] + 1;
            q.push({tx, ty, tz});
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

    cin >> n >> m >> k;
    for (int i = 0; i < n; i ++){
        for (int j = 0; j < m; j ++){
            cin >> s[i][j];
            for (int tem = 0; tem < k; tem ++){
                char temp = s[i][j][tem];
                if (temp != 'S' && temp != 'E') continue;
                if (temp == 'S') sx = i, sy = j, sz = tem;
                else ex = i, ey = j, ez = tem;
            }
        }
    }
    bfs();
    if (!vis[ex][ey][ez]) cout << "Trapped!\n";
    else cout << "Escaped in " << dis[ex][ey][ez] << " minute(s).\n";

    return 0;
}