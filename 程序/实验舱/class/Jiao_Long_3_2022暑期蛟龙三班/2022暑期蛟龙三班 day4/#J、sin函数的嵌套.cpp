#include<bits/stdc++.h>
using namespace std;

int n;

void A(int k,int n){
	if(k == n){
		printf("sin(%d)",k);
		return;
	}
	printf("sin(%d+",k);
	A(k + 1,n);
	printf(")");
}

int main(){
	cin >> n;
	A(1,n);

	return 0;
}

