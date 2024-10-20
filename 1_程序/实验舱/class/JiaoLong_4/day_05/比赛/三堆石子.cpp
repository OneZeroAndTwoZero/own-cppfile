#include<bits/stdc++.h>
using namespace std;

long long a[3];
long long ans;

int main(){
	scanf("%lld %lld %lld",&a[0],&a[1],&a[2]);
	ans = 0;
	sort(a,a + 3);
	ans = max(a[0],a[1]) - min(a[0],a[1]);
	a[2] -= max(a[0],a[1]) - min(a[0],a[1]);
	a[0] = min(a[0],a[1]),a[1] = min(a[0],a[1]);
	if(a[0] + a[1] > a[2]){
		ans += a[2];
		a[0] -= a[2] / 2;
		a[1] -= (a[2] - a[2] / 2);
		ans += min(a[0],a[1]);
	}else{
		ans += a[0] + a[1];
	}
	printf("%lld\n",ans);

	return 0;
}

