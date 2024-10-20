#include<bits/stdc++.h>
using namespace std;

long long ans[1005] = {0};
int n;

long long cz(int x){
	if(ans[x]) return ans[x];
	for(int i = x / 2;i >= 1;i --){
		ans[x] += cz(i);
	}
	ans[x] += 1;
	return ans[x];
}

int main(){
	ans[1] = 1;
	scanf("%d",&n);
	printf("%lld",cz(n));

	return 0;
}

