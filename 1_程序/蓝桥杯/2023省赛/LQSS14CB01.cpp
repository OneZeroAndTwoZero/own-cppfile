#include<bits/stdc++.h>
using namespace std;

int n;

int f(int x){
	return x / 10;
}

int main(){
	scanf("%d",&n);
	printf("%d\n",n - f(n));

	return 0;
}

