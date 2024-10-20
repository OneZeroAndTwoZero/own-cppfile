#include<bits/stdc++.h>
using namespace std;

int n,m;
long long f[105][105] = {0};

int main(){
	scanf("%d %d",&n,&m);
	for(int i = 1;i <= n;i ++){
		for(int j = 1;j <= m;j++){
			if(i == 1 || j == 1) f[i][j] = 1;
			else f[i][j] = f[i - 1][j] + f[i][j - 1];
		}
	}
	printf("%lld\n",f[n][m]);

	return 0;
}

