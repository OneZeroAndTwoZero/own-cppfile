#include<bits/stdc++.h>
using namespace std;

struct t{
	int ri,ci;
};

int n;
t a[1000005];
long long ans = 0,now = 0;

int main(){
	scanf("%d",&n);
	for(int i = 0;i < n;i++){
		scanf("%d %d",&a[i].ri,&a[i].ci);
	}
	ans = a[0].ri;
	for(int i = 0;i < n - 1;i++){
		now += a[i].ci;
		ans += a[i + 1].ri;
		now = max(0LL,now - a[i + 1].ri);
	}
	ans += now + a[n - 1].ci;
	printf("%lld\n",ans);

	return 0;
}

