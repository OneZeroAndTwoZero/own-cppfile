#include<bits/stdc++.h>
using namespace std;

int n,m,q,u,v,w;
int a[1005][1005] = {0};

int main(){
	scanf("%d %d %d",&n,&m,&q);
	memset(a,0x1f,sizeof(a));
	while(m --){
		scanf("%d %d %d",&u,&v,&w);
		if(a[u][v]) a[u][v] = min(a[u][v],w);
		else a[u][v] = a[v][u] = w;
	}
	for(int k = 1;k <= n;k++){
		for(int i = 1;i <= n;i++){
			for(int j = 1;j <= n;j++){
				if(a[i][k] + a[k][j] < a[i][j]){
					a[i][j] = a[i][k] + a[k][j];
				}
			}
		}
	}
	while(q --){
		scanf("%d %d %d",&u,&v,&w);
		bool pd = 1;
		for(int k = 1;k <= n;k++){
			if(a[u][k] + a[k][v] <= w){
				printf("%d\n",a[1][n]);
				pd = 0;
				break;
			}
		}
		if(pd){
			int tem1 = a[u][v],tem2 = a[1][n];
			a[u][v] = w;
			for(int k = 1;k <= n;k++){
				for(int i = 1;i <= n;i++){
					for(int j = 1;j <= n;j++){
						if(a[i][k] + a[k][j] < a[i][j]){
							a[i][j] = a[i][k] + a[k][j];
						}
					}
				}
			}
			printf("%d\n",a[1][n]);
			a[1][n] = tem2,a[u][v] = tem1;
		}
	}

	return 0;
}

