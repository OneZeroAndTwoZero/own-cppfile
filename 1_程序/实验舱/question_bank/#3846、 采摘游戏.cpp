#include<bits/stdc++.h>
using namespace std;

int R, C, sx, sy;
int ans = 0;
int f[131];
string a[1000006];
vector<bool> vis[1000006];
int dir[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

void dfs(int x, int y){
	ans += f[a[x][y]];
	vis[x][y] = 1;
	for (int k = 0; k < 4; k ++){
		int tx = x + dir[k][0], ty = y + dir[k][1];
		if (tx < 0 || ty < 0 || tx >= R || ty >= C) continue;
		if (vis[tx][ty] || a[tx][ty] == '*') continue;
		dfs(tx, ty);
	}
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("../data.in", "r", stdin);
	freopen("../data.out", "w", stdout);
#endif
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	
	f['S'] = 1, f['M'] = 5, f['L'] = 10;
	cin >> R >> C;
	for (int i = 0; i < R; i ++){
		cin >> a[i];
		vis[i].resize(a[i].size() + 3);
	}
	cin >> sx >> sy;
	dfs(sx, sy);
	cout << ans << "\n";
	
	return 0;
}
