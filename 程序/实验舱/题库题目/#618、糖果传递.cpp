#include<bits/stdc++.h>
using namespace std;

int n;
long long a[1000005],sum,ans = 0;

int main(){
	scanf("%d",&n);
	for(int i = 0;i < n;i++){
		scanf("%lld",&a[i]);
		sum += a[i];
	}
	sum /= n;
	for(int i = 1;i < n;i++){
		if(a[i - 1] < sum){
			ans += sum - a[i - 1];
			a[i] -= sum - a[i - 1];
			a[i - 1] = sum;
		}else{
			ans += - sum + a[i - 1];
			a[i] -= sum - a[i - 1];
			a[i - 1] = sum;
		}
	}
	printf("%lld\n",ans);

	return 0;
}

