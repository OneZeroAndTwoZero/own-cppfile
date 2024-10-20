#include<bits/stdc++.h>
using namespace std;

struct th{
	int ti,si;
	bool operator <(const th &a)const{
	    return si < a.si;
	}
};

int n,l = 0,r = 100000000,ans = -1;
th a[200005];

bool check(long long x){
	int now = x;
	for(int i = 0;i < n;i++){
		now = now + a[i].ti;
		if(now > a[i].si) return 0;
	}
	return 1;
}

int main(){
	scanf("%lld",&n);
	for(int i = 0;i < n;i++){
		scanf("%d %d",&a[i].ti,&a[i].si);
	}
	sort(a,a + n);
	while(l <= r){
		long long mid = (l + r) >> 1;
		if(check(mid)){
			ans = mid;
			l = mid + 1;
		}else{
			r = mid - 1;
		}
	}
	printf("%d\n",ans);

	return 0;
}

