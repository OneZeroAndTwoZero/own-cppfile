#include<bits/stdc++.h>
using namespace std;

int n,m,q,sx,sy,ex,ey;
int a[1005][1005] = {0};
long long sum[1005][1005] = {0},ans;

int main(){
	scanf("%d %d %d",&n,&m,&q);
	for(int i = 1;i <= n;i++){
		for(int j = 1;j <= m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(int i = 1;i <= n;i++){
		for(int j = 1;j <= m;j++){
			sum[i][j] = sum[i - 1][j] + sum[i][j - 1] + a[i][j] - sum[i - 1][j - 1];
		}
	}
	while(q --){
		scanf("%d %d %d %d",&sx,&sy,&ex,&ey);
		ans = sum[ex][ey] - sum[sx - 1][ey] - sum[ex][sy - 1] + sum[sx - 1][sy - 1];
		printf("%lld\n",ans);
	}

	return 0;
}

