#include<bits/stdc++.h>
using namespace std;

int n,m;
int a[1005][1005] = {0};

int main(){
	scanf("%d %d",&n,&m);
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j ++){
			scanf("%d",&a[i][j]);
		}
	}

	return 0;
}

