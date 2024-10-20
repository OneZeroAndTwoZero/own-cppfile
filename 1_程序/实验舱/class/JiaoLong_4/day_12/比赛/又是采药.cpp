#include<bits/stdc++.h>
using namespace std;

struct cao{
	long long ti,vi;
};

int t;
int n;
long long m,ans = 0LL;
cao a[1005];
long long can[1005];

void dfs(int d,long long sumt,long long sumv){
	if(d == n){
		if(sumt <= m) ans = max(ans,sumv);
	}
	if(sumt >= m) return;
	if(sumv + can[d + 1] <= ans) return;
	dfs(d + 1,sumt,sumv);
	dfs(d + 1,sumt + a[d].ti,sumv + a[d].vi);
}

bool cmp1(cao a,cao b){
	return a.ti > a.ti;
}
bool cmp2(cao a,cao b){
	return a.vi > a.vi;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("D:\\code\\data.in","r",stdin);
    freopen("D:\\code\\data.out","w",stdout);
#endif

	scanf("%d",&t);
	while(t --){
		scanf("%d %lld",&n,&m);
		for(int i = 0;i < n;i++){
			scanf("%lld %lld",&a[i].ti,&a[i].vi);
		}
		ans = 0LL;
		sort(a,a + n,cmp2);
		can[n] = 0;
		for(int i = n - 1;i >= 0;i--){
			can[i] = can[i + 1] + a[n - i - 1].vi;
		}
		sort(a,a + n,cmp1);
		dfs(0,0,0);
		printf("%lld\n",ans);
	}

	return 0;
}

