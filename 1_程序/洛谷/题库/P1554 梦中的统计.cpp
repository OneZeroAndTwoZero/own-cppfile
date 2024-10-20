#include<bits/stdc++.h>
using namespace std;

int n,m;
int ans[10];

void cz(int x){
	while(x){
		ans[x % 10] ++;
		x /= 10;
	}
}

int main(){
	scanf("%d %d",&n,&m);
	for(int i = n;i <= m;i ++){
		cz(i);
	}
	for(int i = 0;i < 10;i ++){
		printf("%d ",ans[i]);
	}

	return 0;
}

