#include<bits/stdc++.h>
using namespace std;

int r;
int a[1005][1005] = {0},f[1005][1006] = {0};

int main(){
	scanf("%d",&r);
	for(int i = 1;i <= r;i ++){
		for(int j = 1;j <= i;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(int i = r;i > 0;i --){
		for(int j = 1;j <= i;j++){
			f[i][j] = max(f[i + 1][j],f[i + 1][j + 1]) + a[i][j];
		}
	}
	printf("%d\n",f[1][1]);

	return 0;
}

