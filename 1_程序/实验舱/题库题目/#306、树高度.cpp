#include<bits/stdc++.h>
using namespace std;

int n;

int q(int a){
	if(a == 1) return 1;
	return q(ceil((a - 1) / 2.0)) + 1;
}

int main(){
	scanf("%d",&n);
	printf("%d\n",q(n));

	return 0;
}

