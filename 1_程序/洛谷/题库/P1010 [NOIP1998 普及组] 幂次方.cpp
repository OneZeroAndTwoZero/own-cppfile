#include<bits/stdc++.h>
using namespace std;

int n;

void cz(int x){
	if(x == 0){
		printf("0");
		return;
	}
	if(x == 2){
		printf("2");
		return;
	}
	for(int i = 0;;i ++){
		if(pow(2,i) <= x && pow(2,i + 1) > x){
			printf("2");
			if(i != 1) {
				printf("(");
				cz(i);
				printf(")");
			}
			x -= pow(2,i);
			break;
		}
	}
	if(x){
		printf("+");
		cz(x);
	}
}

int main(){
	scanf("%d",&n);
	cz(n);

	return 0;
}

