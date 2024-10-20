#include<bits/stdc++.h>
using namespace std;

int k;
long long n,d,e;
int q,p;

int main(){
	scanf("%d",&k);
	for(int i = 0;i < k;i++){
		scanf("%lld %lld %lld",&n,&d,&e);
		q = 1;
		bool pd = 0;
		for(q = 1;q <= n / q;q ++){
			if(n % q == 0){
				p = n / q;
				if(e * d == (p - 1) * (q - 1) + 1){
					pd = 1;
					printf("%d %d\n",q,p);
					break;
				}
			}
		}
		if(!pd){
			puts("NO");
		}
	}

	return 0;
}

