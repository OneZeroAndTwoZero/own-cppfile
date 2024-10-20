#include<bits/stdc++.h>
using namespace std;

struct dian{
	int xi,yi,st;
};

int n,m;
int sx,sy,ex,ey;
int a[503][505] = {0};
int dir[8][2] = {{2,1},{1,2},{-2,1},{-1,2},{2,-1},{1,-2},{-2,-1},{-1,-2}};
queue<dian> q;

void bfs(){
	q.push({sx,sy,0});
	while(q.size()){
		dian t = q.front();
		q.pop();
		for(int i = 0;i < 8;i++){
			int x = t.xi + dir[i][0],y = t.yi + dir[i][1];
			if(x > 0 && x <= n && y > 0 && y <= m){
				if(a[x][y] == 0){
					a[x][y] = t.st + 1;
					q.push({x,y,a[x][y]});
			    }
			}
		}
	}
}

int main(){
	scanf("%d %d",&n,&m);
	scanf("%d %d %d %d",&sx,&sy,&ex,&ey);
	bfs();
	if(a[ex][ey]) printf("%d\n",a[ex][ey]);
	else printf("-1\n");

	return 0;
}

