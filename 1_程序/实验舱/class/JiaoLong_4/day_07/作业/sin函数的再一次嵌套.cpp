#include<bits/stdc++.h>
using namespace std;

int n;

void f(int t,int check){
	if(t == check){
		printf("sin(%d)",check);
		return;
	}
	printf("sin(%d+",t);
	f(t + 1,check);
	printf(")");
}

void g(int t){
	if(t > n) return;
	if(t != 1) printf("(");
	g(t + 1);
	f(1,n - t + 1);
	printf("+%d",t);
	if(t != 1) printf(")");
}

int main(){
	scanf("%d",&n);
	g(1);
	puts("");

	return 0;
}

