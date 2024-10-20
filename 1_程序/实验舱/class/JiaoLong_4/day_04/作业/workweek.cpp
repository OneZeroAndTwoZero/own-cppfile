#include<bits/stdc++.h>
using namespace std;

int t,n,he,cha;

int main(){
	scanf("%d",&t);
	while(t --){
		scanf("%d",&n);
		he = n - 3;
		he -= 3;
		cha = floor((double)he / 3.0);
		printf("%d\n",cha);
	}

	return 0;
}

