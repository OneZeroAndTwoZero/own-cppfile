#include<bits/stdc++.h>
using namespace std;

int A, B;

int main(){
#ifndef ONLINE_JUDGE
	freopen("../data.in", "r", stdin);
	freopen("../data.out", "w", stdout);
#endif

	scanf("%d %d", &A, &B);
	if (A != 2 &&(!B)){
		if (A == 0){
			printf("biii\n");
		}else{
			printf("dudu\n");
		}
	}else{
		printf("-\n");
	}
	if (A == 1){
		printf("move\n");
	}else{
		printf("stop\n");
	}

	return 0;
}
