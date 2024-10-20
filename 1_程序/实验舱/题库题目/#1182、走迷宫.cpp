#include<bits/stdc++.h>
using namespace std;

struct dian{
	int xi,yi;
};

int n,m;
char a[105][105];
int dir[4][2] = {{0,1},{0,-1},{1,0},{-1,0}};
bool vis[105][105] = {0};
int ans[105][105] = {0};
queue<dian> q;

void bfs(){
	q.push({0,0});
	while(q.size()){
		dian u = q.front();
		q.pop();
		for(int i = 0;i < 4;i++){
			int tx = u.xi + dir[i][0],ty = u.yi + dir[i][1];
			if(tx >= 0 && tx < n && ty >= 0 && ty < m && a[tx][ty] == '.' && !vis[tx][ty]){
				ans[tx][ty] = ans[u.xi][u.yi] + 1;
				q.push({tx,ty});
				vis[tx][ty] = 1;
			}
		}
	}
}

int main(){
	cin >> n >> m;
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	vis[0][0] = 1;
	ans[0][0] = 1;
	bfs();
	cout << ans[n - 1][m - 1] << endl;

	return 0;
}

