#include<bits/stdc++.h>
using namespace std;

int k,m;

bool ok(int a){
	int c = 0;
	while(a){
		if(a % 10 == 3) c ++;
		a /= 10;
	}
	return c == k;
}

int main(){
	scanf("%d %d",&m,&k);
	if(!(m % 19) && ok(m)){
		printf("YES");
	}else{
		printf("NO");
	}

	return 0;
}

