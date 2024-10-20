#include<bits/stdc++.h>
using namespace std;

int n,m;
int a[100005] = {0};
long long sum[100005] = {0},ans = -10000000;

int main(){
	scanf("%d %d",&n,&m);
	for(int i = 1;i <= n;i++){
		scanf("%d",&a[i]);
	}
	for(int i = 1;i <= n;i++){
		sum[i] = sum[i - 1] + a[i];
	}
	for(int i = 1;i + m - 1 <= n;i++){
		ans = max(ans,sum[i + m - 1] - sum[i - 1]);
	}
	printf("%lld\n",ans);

	return 0;
}

