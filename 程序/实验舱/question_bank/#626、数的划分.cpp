#include<bits/stdc++.h>
using namespace std;

int n,k,ans = 0;

void cz(int r,int sum,int f){
	if(r == k){
		if(sum == n)
			ans ++;
		return;
	}
	for(int i = f;i * (k - r) + sum <= n;i ++){
		cz(r + 1,sum + i,i);
	}
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

	scanf("%d %d",&n,&k);
	cz(0,0,1);
	printf("%d\n",ans);

	return 0;
}
