#include<bits/stdc++.h>
using namespace std;

int n;
int a[100005] = {0},f[100005][2] = {0};

int main(){
	scanf("%d",&n);
	for(int i = 1;i <= n;i++){
		scanf("%d",&a[i]);
	}
	f[1][1] = a[1];
	for(int i = 2;i <= n;i++){
		f[i][0] = max(f[i - 1][1],f[i - 1][0]);
		f[i][1] = max(f[i - 1][0],f[i - 2][1]) + a[i];
	}
	printf("%d\n",max(f[n][0],f[n][1]));

	return 0;
}

