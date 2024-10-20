#include<bits/stdc++.h>
using namespace std;

int n,m,q,u,v;
int a[1005][1005] = {0};

int main(){
	scanf("%d %d",&n,&m);
	while(m --){
		scanf("%d %d",&u,&v);
		a[u][v] = a[v][u] = 1;
	}
	scanf("%d",&q);
	while(q --){
		scanf("%d %d",&u,&v);
		printf("%d\n",a[u][v]);
	}

	return 0;
}

