#include<bits/stdc++.h>
using namespace std;

int dir[2][2] = {{0,1},{1,0}};
int n,m;
long long k;
long long ans = 0;
long long a[1005][1005] = {0};
bool ok[1005][1005] = {0};

void dfs(int x,int y,long long sum){
	if(x == n - 1 && y == m - 1){
		if(sum == k){
			ans ++;
		}
	}
	if(sum >= k){
		return ;
	}
	for(int i = 0;i < 2;i++){
		int tx = x + dir[i][0],ty = y + dir[i][1];
		if(tx < n && ty < m){
			if(!ok[tx][ty]){
			ok[tx][ty] = 1;
				dfs(tx,ty,sum + a[tx][ty]);
			}
			ok[tx][ty] = 0;
		}
	}
}

int main(){
	scanf("%d %d %lld",&n,&m,&k);
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			scanf("%lld",&a[i][j]);
		}
	}
	ok[0][0] = 1;
	dfs(0,0,a[0][0]);
	printf("%lld\n",ans);

	return 0;
}

