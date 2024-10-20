#include<bits/stdc++.h>
using namespace std;

int n;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

	scanf("%d",&n);
	for(int i = 1;i <= n;i++){
		if(n % i) continue;
		printf("%d ",i);
	}
	printf("\n");
	
	return 0;
}