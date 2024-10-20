#include<bits/stdc++.h>
using namespace std;

struct que{
	long long ai;
	int bi,ti;
};

que a[100005];
long long n,s;
long long ans,now;

bool cmp(que k,que b){
	return k.ti * b.bi < b.ti * k.bi;
}

int main(){
	scanf("%lld %lld",&n,&s);
	for(int i = 0;i < n;i++){
		scanf("%lld %d %d",&a[i].ai,&a[i].bi,&a[i].ti);
	}
	ans = 0,now = 0;
	sort(a,a + n,cmp);
	for(int i = 0;i < n;i++){
		now += a[i].ti;
		ans += a[i].ai - now * a[i].bi;
	}
	printf("%lld\n",ans);

	return 0;
}

