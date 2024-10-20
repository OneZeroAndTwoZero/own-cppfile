#include<bits/stdc++.h>
using namespace std;

int n;
long long a[100005] = {0},ans = 0;

int main(){
	scanf("%d",&n);
	for(int i = 1;i <= n;i++){
		scanf("%lld",&a[i]);
		a[i] = a[i - 1] + a[i];
	}
	for(int i = 1;i <= n;i++){
		for(int j = i + 1;j < n;j++){
			long long left = a[i];
			long long mid = a[j] - a[i];
			long long right = a[n] - a[j];
			if(left <= mid && mid <= right) ans ++;
		}
	}
	printf("%lld\n",ans);

	return 0;
}

