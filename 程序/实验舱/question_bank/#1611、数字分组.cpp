#include<bits/stdc++.h>
using namespace std;

int t,a,b,c;
int vis[12];

int gcd(int a,int b){
	if(b == 0) return a;
	return gcd(b,a % b);
}

void __init(){
	for(int i = 0;i < 10;i ++){
		vis[i] = 0;
	}
}

bool check(int x){
	if(x < 100 || x > 999) return 0;
	while(x){
		if(x % 10 == 0) return 0;
		if(vis[x % 10]) return 0;
		vis[x % 10] = 1;
		x /= 10;
	}
	return 1;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

	scanf("%d",&t);
	for(int num = 1;num <= t;num ++){
		scanf("%d %d %d",&a,&b,&c);
		int tem = gcd(a,gcd(b,c));
		a /= tem,b /= tem,c /= tem;
		printf("CASE %d:\n",num);
		int cnt = 0;
		for(int i = 1;i * a < 1000;i ++){
			__init();
			if(check(a * i) && check(b * i) && check(c * i)){
				printf("%d %d %d\n",a * i,b * i,c * i);
				cnt ++;
			}
		}
		if(!cnt){
			printf("No Answer\n");
		}
	}

	return 0;
}