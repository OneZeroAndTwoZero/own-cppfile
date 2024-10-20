#include<bits/stdc++.h>
using namespace std;

int n,k;
int a[200005] = {0};
long long sum[200005] = {0},ans = 0;
unordered_map<int,int> zhao;

int main(){
	scanf("%d %d",&n,&k);
	for(int i = 1;i <= n;i++){
		scanf("%d",&a[i]);
	}
	zhao[0] ++;
	for(int i = 1;i <= n;i++){
		sum[i] = sum[i - 1] + a[i];
		ans += zhao[sum[i] - k];
		zhao[sum[i]] ++;
	}
	printf("%lld\n",ans);

	return 0;
}
