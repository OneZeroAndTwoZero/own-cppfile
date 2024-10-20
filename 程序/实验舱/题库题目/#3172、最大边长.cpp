#include<bits/stdc++.h>
using namespace std;

int n,m,ans = -1;
long long x,a[2500][2500] = {0},sum[2500][2500] = {0};
int l = 0,r;

bool check(int k){
	for(int i = 1;i + k <= n;i++){
		for(int j = 1;j + k <= m;j++){
			long long check = sum[i + k][j + k] - sum[i - 1][j + k] - sum[i + k][j - 1] + sum[i - 1][j - 1];
			if(check <= x) return 1;
		}
	}
	return 0;
}

int main(){
	scanf("%d %d %lld",&n,&m,&x);
	r = min(n,m) - 1;
	for(int i = 1;i <= n;i++){
		for(int j = 1;j <= m;j++){
			scanf("%lld",&a[i][j]);
			sum[i][j] = sum[i - 1][j] + sum[i][j - 1] + a[i][j] - sum[i - 1][j - 1];
		}
	}
	while(l <= r){
		int mid = (l + r) >> 1;
		if(check(mid)){
			ans = mid;
			l = mid + 1;
		}else{
			r = mid - 1;
		}
	}
	printf("%d\n",ans + 1);

	return 0;
}

