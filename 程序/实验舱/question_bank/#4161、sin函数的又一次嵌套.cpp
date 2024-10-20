#include<bits/stdc++.h>
using namespace std;

int N;

void F(int x){
	for (int i = 1; i <= x; i ++){
		printf("sin(%d", i);
		if (i != x) printf("+");
	}
	for (int i = 1; i <= x; i ++){
		printf(")");
	}
}

void G(int x){
	for (int i = x; i >= 1; i --){
		printf("cos(");
		F(i);
		if (i != 1) printf("+");
	}
	for (int i = 1; i <= x; i ++){
		printf(")");
	}
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("../data.in", "r", stdin);
	freopen("../data.out", "w", stdout);
#endif

	scanf("%d", &N);
	G(N);
	printf("\n");
	
	return 0;
}
