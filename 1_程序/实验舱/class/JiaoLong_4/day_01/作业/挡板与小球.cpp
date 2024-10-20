#include<bits/stdc++.h>
using namespace std;

int n,m;
int a[505][505] = {0};

int pao(int i,int j){
	if(a[i][j] == 1){
		if(j == m - 1) return -1;
		j ++;
		if(a[i][j] == -1) return -1;
	}else{
		if(j == 0) return -1;
		j --;
		if(a[i][j] == 1) return -1;
	}
    if(i == n - 1) return j;
	i ++;
	return pao(i,j);
}

int main(){
	scanf("%d %d",&n,&m);
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(int i = 0;i < m;i++){
		printf("%d\n",pao(0,i));
	}

	return 0;
}

