#include<bits/stdc++.h>
using namespace std;

int n,ans = 0;
long long t,sum;
long long a[100] = {0};

int main(){
	scanf("%d",&n);
	for(int i = 0;i < n;i++){
		scanf("%lld",&a[i]);
	}
	scanf("%lld",&t);
	for(int i = 1;i < (1 << n);i++){
		sum = 0;
		for(int j = 0;j < n;j ++){
			if((i >> j) & 1) sum += a[j];
		}
		if(sum == t){
			for(int j = 0;j < n;j ++){
				if((i >> j) & 1){
					printf("%d ",a[j]);
				}
			}
			puts("");
			ans ++;
		}
	}
	printf("%d\n",ans);

	return 0;
}

