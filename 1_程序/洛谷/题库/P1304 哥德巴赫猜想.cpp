#include<bits/stdc++.h>
using namespace std;

int n;

bool ok(int a){
	for(int i = 2;i <= a / i;i ++){
		if(!(a % i)) return 0;
	}
	return 1;
}

void cz(int a){
	for(int i = 2;i <= a;i ++){
		if(ok(i) && ok(a - i)){
			printf("%d=%d+%d\n",a,i,a - i);
			return;
		}
	}
}

int main(){
	scanf("%d",&n);
	for(int i = 4;i <= n;i ++){
		if(!(i & 1)) cz(i);
	}

	return 0;
}

