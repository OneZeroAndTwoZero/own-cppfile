#include<bits/stdc++.h>
using namespace std;

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
	int n;
	cin >> n;
	A(1,n);

	return 0;
}

