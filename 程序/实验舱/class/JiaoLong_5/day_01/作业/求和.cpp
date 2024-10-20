#include<bits/stdc++.h>
using namespace std;

int n,q,l,r;
int a[100005] = {0};
long long sum[100005] = {0};

int main(){
	scanf("%d",&n);
	for(int i = 1;i <= n;i++){
		scanf("%d",&a[i]);
	}
	for(int i = 1;i <= n;i++){
		sum[i] = sum[i - 1] + a[i];
	}
	scanf("%d",&q);
	while(q --){
		scanf("%d %d",&l,&r);
		printf("%lld\n",sum[r] - sum[l - 1]);
	}

	return 0;
}

