#include<bits/stdc++.h>
using namespace std;

struct dian{
	bool rh,rl;
	int h,l;
};
int n,m,x,y;
dian num[2005][2005];
char a[2005][2005] = {0};
bool ok[2005][2005] = {0};
int dir[4][2] = {{0,1},{0,-1},{1,0},{-1,0}};
int ans = 0;

void dfs(int i,int j){
	ok[i][j] = 1;
	ans = max(ans,(num[i][j].h + num[i][j].l));
	for(int k = 0;k < 4;k++){
		int ti = i + dir[k][0],tj = j + dir[k][1];
		if(ti >= 0 && ti < n && tj >= 0 && tj < m){
			if(!ok[ti][tj] && a[ti][tj] != '#' && a[ti][tj] != 'G'){
				dfs(ti,tj);
			}
		}
	}
}

int main(){
	scanf("%d %d %d %d",&n,&m,&x,&y);
	x --,y --;
    for(int i = 0;i < n;i++){
    	cin >> a[i];
	}
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			if(a[i][j] != '#' && a[i][j] !='G'){
				if(!num[i][j].rl){
					num[i][j].rl = 1;
					int sl = 0;
					for(int k = i;k >= 0;k --){
						if(a[k][j] == '#') break;
						if(a[k][j] == 'G') sl ++;
					}
					for(int k = i;k < n;k ++){
						if(a[k][j] == '#') break;
						if(a[k][j] == 'G') sl ++;
					}
					
					for(int k = i;k >= 0;k --){
						if(a[k][j] == '#') break;
						if(a[k][j] != 'G'){
							num[k][j].rl = 1;
							num[k][j].l = sl;
						}
					}
					for(int k = i;k < n;k ++){
						if(a[k][j] == '#') break;
						if(a[k][j] != 'G'){
							num[k][j].rl = 1;
							num[k][j].l = sl;
						}
					}
					num[i][j].l = sl;
				}else if(!num[i][j].rh){
					num[i][j].rh = 1;
					int sl = 0;
					for(int k = j;k >= 0;k --){
						if(a[i][k] == '#') break;
						if(a[i][k] == 'G') sl ++;
					}
					for(int k = j;k < m;k ++){
						if(a[i][k] == '#') break;
						if(a[i][k] == 'G') sl ++;
					}
					
					for(int k = j;k >= 0;k --){
						if(a[i][k] == '#') break;
						if(a[i][k] != 'G'){
							num[i][k].rh = 1;
							num[i][k].h = sl;
						}
					}
					for(int k = j;k < m;k ++){
						if(a[i][k] == '#') break;
						if(a[i][k] != 'G'){
							num[i][k].rh = 1;
							num[i][k].h = sl;
						}
					}
					num[i][j].h = sl;
				}
		    }
		}
	}
	dfs(x,y);
	printf("%d\n",ans);

	return 0;
}
