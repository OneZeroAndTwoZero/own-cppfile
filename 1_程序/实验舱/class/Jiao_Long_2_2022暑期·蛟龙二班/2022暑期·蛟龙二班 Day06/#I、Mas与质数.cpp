#include<bits/stdc++.h>
using namespace std;

int n,t;

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
	while(n --){
		bool ok = 1;
		scanf("%d",&t);
		ok = su(t);
		while(t){
			if(!su(t % 10)) ok = 0;
			t /= 10;
		}
		if(ok){
			printf("yes\n");
		}else{
			printf("no\n");
		}
	}

	return 0;
}

