#include<bits/stdc++.h>
using namespace std;

int t;
long long x,y;

int main(){
	scanf("%d",&t);
	while(t --){
		scanf("%lld %lld",&x,&y);
		if(y / x * x != y){
			printf("0 0\n");
		}else{
			printf("%lld %lld\n",1LL,y / x);
		}
	}

	return 0;
}

