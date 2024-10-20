#include<bits/stdc++.h>
using namespace std;

int t,x;
bool ok(int a){
	if(a == 1 || a == 7) return 1;
	if(a < 10) return 0;
	int re = 0;
	while(a){
		re += (a % 10) * (a % 10);
		a /= 10;
	}
	return ok(re);
}

int main(){
	scanf("%d",&t);
	while(t --){
		scanf("%d",&x);
		if(ok(x)){
			printf("true\n");
		}else{
			printf("false\n");
		}
	}

	return 0;
}

