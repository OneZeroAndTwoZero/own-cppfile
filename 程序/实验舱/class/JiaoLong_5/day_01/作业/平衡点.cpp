#include<bits/stdc++.h>
using namespace std;

int n,a[200005] = {0};
long long sum1[200005] = {0},sum2[200005] = {0},ans1[200005] = {0},ans2[200005] = {0},ans = 1000000000000000;

int main(){
	scanf("%d",&n);
	for(int i = 1;i <= n;i++){
		scanf("%d",&a[i]);
		sum1[i] = sum1[i - 1] + a[i];
		ans1[i] = ans1[i - 1] + sum1[i];
	}
	for(int i = n;i > 0;i--){
		sum2[i] = sum2[i + 1] + a[i];
		ans2[i] = ans2[i + 1] + sum2[i];
	}
	for(int i = 1;i <= n;i++){
		ans = min(ans,abs(ans1[i - 1] - ans2[i + 1]));
	}
	printf("%lld\n",ans);

	return 0;
}

