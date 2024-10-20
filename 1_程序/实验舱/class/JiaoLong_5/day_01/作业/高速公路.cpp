#include<bits/stdc++.h>
using namespace std;

int n,m,l,r;
int a[200005] = {0};
long long sum[200005] = {0},z = 0;

int main(){
	scanf("%d",&n);
	for(int i = 1;i <= n;i++){
		scanf("%d",&a[i]);
		sum[i] = sum[i - 1] + a[i];
	}
	z = sum[n];
	scanf("%d",&m);
	while(m --){
		scanf("%d %d",&l,&r);
		if(l > r) swap(l,r);
		printf("%lld\n",min(sum[r - 1] - sum[l - 1],z - (sum[r - 1] - sum[l - 1])));
	}

	return 0;
}

