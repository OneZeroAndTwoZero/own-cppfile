#include<bits/stdc++.h>
using namespace std;

int n,m;
int a[1005][1005] = {0};
bool vis[1005][1005] = {0};

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

	scanf("%d %d",&n,&m);
	for(int i = 0;i < n;i ++){
		for(int j = 0;j < m;j ++){
			scanf("%d",&a[i][j]);
		}
	}
	vis[0][0] = 1;
	for(int i = 0;i <= n + m - 2;i ++){
		int min_ = 11;
		for(int k = 0;k < n;k ++){
			int p = i - k;
			if(p < 0 || p >= m || !vis[k][p]) continue;
			min_ = min(min_,a[k][p]);
		}
		for(int k = 0;k <= n;k ++){
			int p = i - k;
			if(p < 0 || p >= m || !vis[k][p]) continue;
			if(a[k][p] == min_){
				vis[k + 1][p] = vis[k][p + 1] = 1;
			}
		}
		printf("%d",min_);
	}

	return 0;
}