#include<bits/stdc++.h>
using namespace std;

struct dian{
	int xi,yi,zi;
};

int dir[6][3] = {{1,0,0},{0,1,0},{0,0,1},{-1,0,0},{0,-1,0},{0,0,-1}};
int vis[105][105][105] = {0};
int sx,sy,sz,ex,ey,ez;
int t,n,m;

int bfs(){
	queue<dian> q;
	q.push({sx,sy,sz});
	while(q.size()){
		dian t = q.front();
		q.pop();
		if(t.xi == ex && t.yi == ey && t.zi == ez){
			return vis[t.xi][t.yi][t.zi];
		}
		for(int i = 0;i < 6;i++){
			int tx = t.xi + dir[i][0],ty = t.yi + dir[i][1],tz = t.zi + dir[i][2];
			if(tx >= 0 && tx < n && ty >= 0 && ty < n && tz >= 0 && tz < n && vis[tx][ty][tz] == 0){
				vis[tx][ty][tz] = vis[t.xi][t.yi][t.zi] + 1;
				q.push({tx,ty,tz});
			}
		}
	}
	return -1;
}

int main(){
	scanf("%d",&t);
	while(t --){
		memset(vis,0,sizeof(vis));
		scanf("%d %d",&n,&m);
		for(int l = 0;l < m;l++){
			scanf("%d %d %d %d %d %d",&sx,&sy,&sz,&ex,&ey,&ez);
			sx --,sy --,sz --,ez --,ey --,ex--;
			for(int i = sx;i <= ex;i++){
				for(int j = sy;j <= ey;j++){
					for(int k = sz;k <= ez;k++){
						vis[i][j][k] = -1;
					}
				}
			}
		}
		scanf("%d %d %d %d %d %d",&sx,&sy,&sz,&ex,&ey,&ez);
		sx --,sy --,sz --,ez --,ey --,ex--;
		if(sx == ex && sy == ey && ez == sz){
			printf("0\n");
		}else{
			printf("%d\n",bfs());
		}
	}

	return 0;
}

