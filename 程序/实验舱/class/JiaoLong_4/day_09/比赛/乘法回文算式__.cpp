#include<bits/stdc++.h>
using namespace std;

int check[100] = {0};
bool ans[100] = {0};
int pos = 0;

void cz(long long a){
	while(a){
		check[++pos] = a % 10;
		a /= 10;
	}
}

int main(){
	long long n;
	cin >> n;
	cz(n);
	for(int i = pos;i > 1;i --){
		printf("%d*",check[i]);
	}
	printf("%d=%d",check[1],check[1]);
	for(int i = 2;i <= pos;i ++){
		printf("*%d",check[i]);
	}

	return 0;
}

