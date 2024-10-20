#include<bits/stdc++.h>
using namespace std;

int n,m;
int a[1005][1005] = {0};
long long sum[1005][1005] = {0};

int main(){
	scanf("%d %d",&n,&m);
	for(int i = 1;i <= n;i++){
		for(int j = 1;j <= m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(int i = 1;i <= n;i++){
		for(int j = 1;j <= m;j++){
			sum[i][j] = sum[i - 1][j] + sum[i][j - 1] + a[i][j] - sum[i - 1][j - 1];
			printf("%lld ",sum[i][j]);
		}
		printf("\n");
	}

	return 0;
}

