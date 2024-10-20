#include<bits/stdc++.h>
using namespace std;

long long n;
int t,a[1005] = {0};

bool cz(){
	for(int i = 0;i < 1000;i++) a[i] = 0;
	for(int i = 0;i < 100;i++){
		a[i] = n % 3;
		if(a[i] == 2) return 0;
		n /= 3;
	}
	return 1;
}

int main(){
	scanf("%d",&t);
	while(t --){
		scanf("%lld",&n);
		if(!n){
			printf("-1\n");
			continue;
		}
		if(cz()){
			long long q = 1;
			for(int i = 0;i < 100;i++){
				if(a[i]){
					printf("%lld ",q);
				}
				q *= 3;
			}
			printf("\n");
		}else{
			printf("%d\n",-1);
		}
	}

	return 0;
}

