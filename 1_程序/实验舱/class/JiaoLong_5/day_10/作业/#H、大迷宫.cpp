#include<bits/stdc++.h>
using namespace std;

int n,m;
long long ans = 1,c = 1;

int main(){
	scanf("%d %d",&n,&m);
	for(int i = n + m - 2;i >= m;i --){
		ans *= i;
	}
	for(int i = 1;i < n;i++){
		c *= i;
	}
	ans /= c;
	printf("%lld\n",ans);

	return 0;
}

