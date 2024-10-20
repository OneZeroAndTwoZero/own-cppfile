#include<bits/stdc++.h>
using namespace std;

int n,c,x;
long long ans = 0;
int a[200005] = {0};

int lsearch(int x){
	int l = 0,r = n - 1;
	while(l <= r){
		int mid = (l + r) >> 1;
		if(a[mid] >= x) r = mid - 1;
		else l = mid + 1;
	}
	if(l < 0 || a[l] != x){
		return 100000000;
	}else{
		return l;
	}
}

int rsearch(int x){
	int l = 0,r = n - 1;
	while(l <= r){
		int mid = (l + r) >> 1;
		if(a[mid] > x) r = mid - 1;
		else l = mid + 1;
	}
	if(r >= n || a[r] != x){
		return -10000000;
	}else{
		return r;
	}
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

	scanf("%d %d",&n,&c);
	for(int i = 0;i < n;i ++){
		scanf("%d",&a[i]);
	}
	sort(a,a + n);
	for(int i = 0;i < n;i ++){
		x = a[i] - c;
		ans += max(0,rsearch(x) - lsearch(x) + 1);
	}
	printf("%lld\n",ans);

	return 0;
}

