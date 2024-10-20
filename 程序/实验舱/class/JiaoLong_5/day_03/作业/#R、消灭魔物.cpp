#include<bits/stdc++.h>
using namespace std;

int n,a,b;
long long ans = 500000,l = 0,r = 1000000000;
int w[100005] = {0};

bool check(long long x){
	long long gs = x;
	for(int i = 0;i < n;i++){
		if(x * a < w[i]){
			gs -= ceil((w[i] - (x * a)) / (double)b);
		}
	}
	if(gs < 0) return 0;
	return 1;
}

int main(){
	scanf("%d %d %d",&n,&b,&a);
	b -= a;
	for(int i = 0;i < n;i++){
		scanf("%d",&w[i]);
	}
	while(l <= r){
		int mid = (l + r) >> 1;
		if(check(mid)){
			ans = mid;
			r = mid - 1;
		}else{
			l = mid + 1;
		}
	}
	printf("%lld\n",ans);

	return 0;
}

