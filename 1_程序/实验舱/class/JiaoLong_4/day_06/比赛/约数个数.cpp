#include<bits/stdc++.h>
using namespace std;

int n,a,p,t,y,tem;
long long ans;

int main(){
	scanf("%d %d %d",&n,&a,&p);
	a %= p;
	ans = 0;
	for(int i = 1;i <= n;i++){
		t = (i + a) % p;
		if(i & 1) t = -1 * t;
		y = 1;
		int ti = i;
		for(int j = 2;j <= ti && ti != 1;j ++){
			tem = 0;
			while(ti % j == 0){
				tem ++;
				ti /= j;
			}
			y *= (tem + 1);
		}
		if(ti != 1) y = 2;
		ans += t * y; 
	}
	printf("%lld\n",ans);

	return 0;
}

