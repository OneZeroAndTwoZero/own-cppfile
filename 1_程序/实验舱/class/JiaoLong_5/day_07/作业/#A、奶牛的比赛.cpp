#include<bits/stdc++.h>
using namespace std;

int n,m,a,b,check,ans = 0;
bool dis[105][105] = {0};

int main(){
	scanf("%d %d",&n,&m);
	for(int i = 0;i < m;i++){
		scanf("%d %d",&a,&b);
		dis[a][b] = 1;
	}
	for(int k = 1;k <= n;k++){
		for(int i = 1;i <= n;i++){
			for(int j = 1;j <= n;j++){
				if(dis[i][k] && dis[k][j]) dis[i][j] = 1;
			}
		}
	}
	for(int i = 1;i <= n;i++){
		check = 0;
		for(int j = 1;j <= n;j++){
			check += dis[i][j] + dis[j][i];
		}
		ans += check == n - 1;
	}
	printf("%d\n",ans);

	return 0;
}

