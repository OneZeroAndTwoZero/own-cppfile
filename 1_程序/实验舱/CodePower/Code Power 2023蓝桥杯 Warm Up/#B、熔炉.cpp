#include<bits/stdc++.h>
using namespace std;

int n;
long long a,b,ansmin = 0,ansmax = 1e18;

int main(){
#ifndef ONLINE_JUDGE
    freopen("D:\\code\\data.in","r",stdin);
    freopen("D:\\code\\data.out","w",stdout);
#endif

	scanf("%d",&n);
	for(int i = 0;i < n;i ++){
		scanf("%lld %lld",&a,&b);
		long long min_ = a / (b + 1) + 1,max_ = a / b;
		ansmin = max(ansmin,min_);
		ansmax = min(ansmax,max_);
	}
	printf("%lld %lld",ansmin,ansmax);

	return 0;
}

