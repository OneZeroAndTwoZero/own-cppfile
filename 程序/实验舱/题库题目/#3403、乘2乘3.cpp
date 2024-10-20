#include<bits/stdc++.h>
using namespace std;

int t,n,m,k;

int cz(int a){
	int res = 0;
	while(1){
		if(a % 3) break;
		res ++;
		a /= 3;
	}
	while(1){
		if(a % 2) break;
		res ++;
		a /= 2;
	}
	if(a != 1) return -1;
	return res;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

	scanf("%d",&t);
	while(t --){
		scanf("%d %d",&n,&m);
		if(m % n){
			printf("-1\n");
			continue;
		}
		k = m / n;
		printf("%d\n",cz(k));
	}

	return 0;
}

