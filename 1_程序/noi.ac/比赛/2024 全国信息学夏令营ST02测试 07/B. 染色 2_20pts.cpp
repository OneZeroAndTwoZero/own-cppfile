#include<bits/stdc++.h>
using namespace std;

int n, m;
string s[10004];
int cnt[2];
bool vis[1004][1004];
int dir[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
int ans = 1000000;

bool check(){
	for (int i = 0; i < n; i ++){
		for (int j = 0; j < m; j ++){
			if (s[i][j] == 'x') continue;
			if (vis[i][j]) continue;
			for (int k = 0; k < 4; k ++){
                int tx = i + dir[k][0], ty = j + dir[k][1];
                if (tx < 0 || ty < 0 || tx >= n || ty >= m) continue;
				if (s[tx][ty] == 'x') continue;
	        	if (vis[tx][ty] == 0) return 0;
			}
		}
	}
	return 1;
}

void dfs(int x, int y, int k){
	if (x == n){
		if (check()) ans = min(ans, k);
		return;
	}
	if (y == m) return dfs(x + 1, 0, k);
	if (k >= ans) return;
	dfs(x, y + 1, k);
	vis[x][y] = 1;
	dfs(x, y + 1, k + 1);
	vis[x][y] = 0;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    cin >> n >> m;
    for (int i = 0; i < n; i ++){
        cin >> s[i];
    }
    dfs(0, 0, 0);
	printf("%d\n", ans);

    return 0;
}
