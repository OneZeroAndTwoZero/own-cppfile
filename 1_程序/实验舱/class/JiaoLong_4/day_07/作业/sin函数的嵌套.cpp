#include<bits/stdc++.h>
using namespace std;

int n;

void f(int t){
	if(t == n){
		printf("sin(%d)",n);
		return;
	}
	printf("sin(%d+",t);
	f(t + 1);
	printf(")");
}

int main(){
	scanf("%d",&n);
	f(1);
	puts("");

	return 0;
}

