#include<bits/stdc++.h>
using namespace std;

long long n;
int t;
int num[100][10] = {0};
int check[10] = {0};

bool ok(int r){
	for(int i = 0;i < 10;i++){
		if(check[i] != num[r][i]){
			return 0;
		}
	}
	return 1;
}

void f(int r,long long a){
	while(a){
		num[r][a % 10] ++;
		a /= 10;
	}
}

void cz(){
	long long a = 1;
	for(int i = 0;i < 63;i++){
		f(i,a);
		a *= 2;
	}
}

int main(){
	scanf("%d",&t);
	cz();
	while(t --){
		scanf("%lld",&n);
		for(int i = 0;i < 10;i++) check[i] = 0;
		while(n){
			check[n % 10] ++;
			n /= 10;
		}
		bool pd = 0;
		for(int i = 0;i < 63;i++){
			if(ok(i)){
				pd = 1;
				break;
			}
		}
		if(pd){
			puts("Yes");
		}else{
			puts("No");
		}
	}

	return 0;
}

