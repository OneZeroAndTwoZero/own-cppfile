#include<bits/stdc++.h>
using namespace std;

struct dian{
	int xi,yi;
};
struct shu{
	int f,z;
};

stack<dian> d;
int n,m,sum = 0,r = 1;
shu num[2005][2005] = {0};
int a[2005][2005] = {0};
int dir[4][2] = {{-1,0},{0,-1},{1,0},{0,1}};

void dfs(int x,int y){
	sum ++;
	num[x][y].z = 1;
	d.push({x,y});
	for(int i = 0;i < 4;i++){
		int tx = x + dir[i][0],ty = y + dir[i][1];
		if(tx >= 0 && ty >= 0 && tx < n && ty < m){
			if(a[tx][ty] == 0 && num[tx][ty].z == 0) dfs(tx,ty);
		}
	}
}

int main(){
	scanf("%d %d",&n,&m);
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			if(a[i][j] == 0 && num[i][j].z == 0){
				dfs(i,j);
				while(d.size() != 0){
					dian t = d.top();
					num[t.xi][t.yi].z = sum;
					num[t.xi][t.yi].f = r;
					d.pop();
				}
				sum = 0;
				r ++;
			}
		}
	}
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			if(a[i][j] == 0){
				printf("%d ",num[i][j].z);
			}else{
				int ans = 0;
				int chac[4] = {0};
				for(int k = 0;k < 4;k++){
					int ti = i + dir[k][0];
					int tj = j + dir[k][1];
					if(ti >= 0 && tj >= 0 && ti < n && tj < m){
						if(a[ti][tj] == 0){
							bool pd = 0;
							for(int g = 0;g < k;g++){
								if(num[ti][tj].f == chac[g]){
									pd = 1;
									break;
								} 
							}
							if(!pd){
								ans += num[ti][tj].z;
								chac[k] = num[ti][tj].f;
						    }
						}
					}
				}
				printf("%d ",ans + 1);
			}
		}
		puts("");
	}

	return 0;
}

