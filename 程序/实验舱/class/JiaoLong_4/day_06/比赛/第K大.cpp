#include<bits/stdc++.h>
using namespace std;

int t;
long long a,b,k,g;
bool p;

long long gcd(long long t1,long long t2){
	if(t2 == 0) return t1;
	return gcd(t2,t1 % t2);
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("D:\\code\\data.in","r",stdin);
    freopen("D:\\code\\data.out","w",stdout);
#endif

	scanf("%d",&t);
	while(t --){
		scanf("%lld %lld %lld",&a,&b,&k);
		if(k == 1){
			printf("%d\n",gcd(a,b));
			continue;
		}
		g = gcd(a,b);
		p = 1;
		for(long long i = g;i >= 1;i--){
			if(g % i == 0){
				k --;
				if(!k){
					printf("%lld\n",i);
					p = 0;
					break;
				}
			}
		}
		if(p) printf("-1\n");
	}

	return 0;
}

