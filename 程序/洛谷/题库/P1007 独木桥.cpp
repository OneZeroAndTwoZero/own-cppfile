#include<bits/stdc++.h>
using namespace std;

int l,n,t,ansmin = 0,ansmax = 0;

int main(){
	scanf("%d %d",&l,&n);
	while(n --){
		scanf("%d",&t);
		ansmin = max(ansmin,min(t,l - t + 1));
		ansmax = max(ansmax,max(t,l - t + 1));
	}
	printf("%d %d",ansmin,ansmax);

	return 0;
}

