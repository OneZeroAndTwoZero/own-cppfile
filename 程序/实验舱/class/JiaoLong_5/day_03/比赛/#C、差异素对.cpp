#include<bits/stdc++.h>
using namespace std;

int n,ans = 0;

int gcd(int a,int b){
	if(b == 0) return a;
	return gcd(b,a % b);
}

bool su(int a){
	if(a == 2) return 1;
	if(a < 2 || !(a & 1)) return 0;
	for(int i = 2;i <= a / i;i++){
		if(a % i == 0) return 0;
	}
	return 1;
}

int main(){
	scanf("%d",&n);
	for(int i = 1;i <= n;i++){
		for(int j = i + 1;j <= n;j++){
			int g = gcd(i,j);
			if(su(i / g) && su(j / g)){
				ans ++;
			}
		}
	}
	printf("%d\n",ans * 2);

	return 0;
}

