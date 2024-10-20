#include<bits/stdc++.h>
using namespace std;

int n, cnt = 0;
string s[131];
bool vis[131][131];
int dir[4][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

void dfs(int x, int y){
    cnt --;
    vis[x][y] = 1;
    for (int i = 0; i < 4; i ++){
        int tx = x + dir[i][0], ty = y + dir[i][1];
        if (tx < 0 || ty < 0 || tx >= 128 || ty >= 128) continue;
        if (s[tx][ty] == '1' || vis[tx][ty]) continue;
        dfs(tx, ty);
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

    cin >> n;
    while (n --){
        memset(vis, 0, sizeof(vis));
        for (int i = 0; i < 128; i ++){
            cin >> s[i];
        }
        cnt = 128 * 128;
        if (s[0][0] == '0') dfs(0, 0);
        if (!vis[0][127] && s[0][127] == '0') dfs(0, 127);
        if (!vis[127][0] && s[127][0] == '0') dfs(127, 0);
        if (!vis[127][127] && s[127][127] == '0') dfs(127, 127);
        cout << (int)(sqrt(cnt)) << "\n";
    }

    return 0;
}