#include<bits/stdc++.h>
using namespace std;

int n,q;
long long a[100005],cha[100005];
long long k,ans;

int find(int l,int r,long long x){
	while(l <= r){
		int mid = (l + r) >> 1;
		if(cha[mid] == x) return mid;
		if(cha[mid] < x) l = mid + 1;
		if(cha[mid] > x) r = mid - 1;
	}
	return l;
}

int main(){
	scanf("%d %d",&n,&q);
	for(int i = 1;i <= n;i++){
		scanf("%lld",&a[i]);
		cha[i] = a[i] - i;
	}
	cha[n + 1] = 1e18;
	while(q --){
		scanf("%lld",&k);
		int x = find(1,n + 1,k);
		ans = k + x - 1;
		printf("%lld\n",ans);
	}

	return 0;
}

