#include<bits/stdc++.h>
using namespace std;

int t;
long long x,y;
long long zd,zs;

int main(){
	scanf("%d",&t);
	while(t --){
		scanf("%d %d",&x,&y);
		zd = x * 2,zs = x * 3;
		zd = max(0LL,(y - zd) / 2);
		zs = max(0LL,y - zs);
		printf("%d %d\n",zs,zd);
	}

	return 0;
}

