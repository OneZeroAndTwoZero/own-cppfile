#include<bits/stdc++.h>
using namespace std;

int n,m,u,v;
int a[100005] = {0};

int main(){
	scanf("%d %d",&n,&m);
	while(m --){
		scanf("%d %d",&u,&v);
		a[u] ++;
		a[v] ++;
	}
	for(int i = 0;i < n;i++){
		printf("%d\n",a[i + 1]);
	}

	return 0;
}

