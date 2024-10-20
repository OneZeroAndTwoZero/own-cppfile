#include<bits/stdc++.h>
using namespace std;

int n,k;
long long a[100005],sum[100005] = {0},max1 = 0,max2 = 0;

int main(){
	scanf("%d %d",&n,&k);
	for(int i = 1;i <= n;i++){
		scanf("%lld",&a[i]);
		sum[i] = sum[i - 1] + a[i];
	}
	for(int i = 1;i <= n;i++){
		max1 = max(max1,sum[i - 1] - sum[max(0,i - k - 1)]);
		max2 = max(max2,sum[min(n,i + k)] - sum[i]);
	}
	printf("%lld %lld\n",max1,max2);

	return 0;
}

