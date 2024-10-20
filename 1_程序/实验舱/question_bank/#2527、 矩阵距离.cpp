#include<bits/stdc++.h>
using namespace std;

typedef struct{
    int x, y, val;
} node;

int n, m;
string s[1005];
bool vis[1005][1005];
int ans[1005][1005];
int dir[4][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

void bfs(){
    queue<node> q;
    for (int i = 0; i < n; i ++){
        for (int j = 0; j < m; j ++){
            if (s[i][j] == '0') continue;
            vis[i][j] = 1, ans[i][j] = 0;
            q.push({i, j, 0});
        }
    }
    while (q.size()){
        node x = q.front();
        q.pop();
        for (int i = 0; i < 4; i ++){
            int tx = x.x + dir[i][0], ty = x.y + dir[i][1];
            if (tx < 0 || ty < 0 || tx >= n || ty >= m) continue;
            if (vis[tx][ty]) continue;
            vis[tx][ty] = 1, ans[tx][ty] = ans[x.x][x.y] + 1;
            q.push({tx, ty, ans[tx][ty]});
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

    cin >> n >> m;
    for (int i = 0; i < n; i ++){
        cin >> s[i];
    }
    bfs();
    for (int i = 0; i < n; i ++){
        for (int j = 0; j < m; j ++){
            cout << ans[i][j] << " \n"[j == m - 1];
        }
    }

    return 0;
}