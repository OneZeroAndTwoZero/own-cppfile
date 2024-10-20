#include<bits/stdc++.h>
using namespace std;

int n,m,num = 0,ans_in = 0,ans_out = 0;
int a[1005][1005] = {0}; 

int main(){
	scanf("%d %d",&n,&m);
	for(int i = 0;i < n;i++){
		for(int j = 0;j < n;j++){
			scanf("%d",&a[i][j]);
			num += (bool)a[i][j];
		}
	}
	for(int i = 0;i < n;i++){
		ans_out += (bool)a[m - 1][i];
	}
	for(int i = 0;i < n;i++){
		ans_in += (bool)a[i][m - 1];
	}
	printf("%d %d %d\n%d\n",m,ans_out,ans_in,num);

	return 0;
}

