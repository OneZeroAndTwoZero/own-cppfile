#include<bits/stdc++.h>
using namespace std;

long long n,m;

int main(){
	scanf("%lld %lld",&n,&m);
	for(int i = 1;i <= m;i += 2){
		for(int j = i + 2;j <= m;j += 2){
		    int z = (3 * i * j) - (n * i) - (n * j);
			int mu = n * i * j;
			if(mu > 0 && z >= 0 && mu / z <= m && (mu % z == 0)){
				printf("%d %d %d\n",i,j,mu / z);
				return 0;
			}
		}
	}
	printf("No solution in 3 ~ %d.\n",m);

	return 0;
}

