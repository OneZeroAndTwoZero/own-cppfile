#include<bits/stdc++.h>
using namespace std;

int d,i;

int ans(int k,int a){
	if(k == 0) return 0;
	int re = 0;
	if(!(a & 1)){
		re += pow(2,k - 1);
	}
	re += ans(k - 1,a % (pow(2,k - 1)));
	return re;
}

int main(){
	scanf("%d %d",&d,&i);
	printf("%d\n",ans(d,i));

	return 0;
}

