#include<bits/stdc++.h>
using namespace std;

int n,m,q;
int sum[1005][1005] = {0};
int sx,sy,ex,ey;

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

	scanf("%d %d",&n,&m);
	for(int i = 1;i <= n;i ++){
		for(int j = 1;j <= m;j ++){
			scanf("%d",&sum[i][j]);
			sum[i][j] += sum[i - 1][j] + sum[i][j - 1] - sum[i - 1][j - 1];
		}
	}
	scanf("%d",&q);
	while(q --){
		scanf("%d %d %d %d",&sx,&sy,&ex,&ey);
		if(sx > ex) swap(sx,ex);
		if(sy > ey) swap(sy,ey);
		printf("%d\n",sum[ex][ey] - sum[sx - 1][ey] - sum[ex][sy - 1] + sum[sx - 1][sy - 1]);
	}

	return 0;
}