#include<bits/stdc++.h>
using namespace std;

int n;
int a[1005][1005] = {0};
int f[1005][1005][1] = {0};

int main(){
	scanf("%d",&n);
	for(int i = 1;i <= n;i++){
		for(int j = 1;j <= n;j++){
			scanf("%d",&a[i][j]);
		}
	}

	return 0;
}

