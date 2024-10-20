#include<bits/stdc++.h>
using namespace std;

int a[10] = {0};
int ok[10] = {0};

void cz(int k){
	if(k == 9){
		int num1 = 100 * a[0] + 10 * a[1] + a[2];
		int num2 = 100 * a[3] + 10 * a[4] + a[5];
		int num3 = 100 * a[6] + 10 * a[7] + a[8];
		if(6 * num1 == 3 * num2 && 6 * num1 == 2 * num3){
			printf("%d %d %d\n",num1,num2,num3);
		}
		return;
	}
	for(int i = 1;i < 10;i ++){
		if(!ok[i]){
			ok[i] = 1;
			a[k] = i;
			cz(k + 1);
			ok[i] = 0;
		}
	}
}

int main(){
	cz(0);

	return 0;
}

