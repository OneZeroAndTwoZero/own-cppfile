#include<bits/stdc++.h>
using namespace std;

bool su(int n){
	if(n == 2) return 1;
	if(n < 2 || n % 2 == 0) return 0;
	for(int i = 2;i * i <= n;i++){
		if(n % i == 0){
			return 0;
		}
	}
	return 1;
}

int main(){
	int n;
	while(cin >> n){
		if(!n) return 0;
		for(int i = 2;i < n;i++){
			if(su(i) && su(n - i)){
				printf("%d = %d + %d\n",n,i,n - i);
				break;
			}
		}
	}

	return 0;
}

