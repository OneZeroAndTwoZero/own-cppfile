#include<bits/stdc++.h>
using namespace std;

int n,k,ans = 0;

void cz(int r,int sum,int f){
	if(r == k){
		if(sum == n)
			ans ++;
		return;
	}
	// i = f 为开始条件,保证单调性
	// i + sum <= n 即为可行性剪枝
	for(int i = f;i + sum <= n;i ++){
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
