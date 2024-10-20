#include<bits/stdc++.h>
using namespace std;

int n,q;
long long v,l,t;
long long a[200005] = {0};

bool cmp(long long a,long long b){
	return a > b;
}

int erf(long long x){
	int l_ = 1,r = n;
	while(l_ <= r){
		int mid = (l_ + r) >> 1;
		if(a[mid] == x) return mid;
		if(a[mid] < x) l_ = mid + 1;
		else r = mid - 1;
	}
	return l_;
}

int main(){
	scanf("%d %lld %lld",&n,&l,&v);
	for(int i = 1;i <= n;i++){
		scanf("%lld",&a[i]);
	}
	sort(a + 1,a + n + 1,cmp);
	for(int i = 1;i <= n;i++){
		a[i] = a[i - 1] + a[i];
	}
	a[n + 1] = 100000000000000005;
	scanf("%d",&q);
	for(int i = 0;i < q;i++){
		scanf("%lld",&t);
		t = t * v;
		t = t - l;
		t ++;
		if(t < 0) printf("0\n");
		else{
			int ans = erf(t);
			if(ans == n + 1){
				printf("-1\n");
			}else{
				printf("%d\n",ans);
			}
		}
	}

	return 0;
}

