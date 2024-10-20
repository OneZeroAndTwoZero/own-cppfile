#include<bits/stdc++.h>
using namespace std;

int n,m,k,num,s,e;
long long ans = 0,a[1000005];
int d[1000005];

int main(){
	scanf("%d %d %d",&n,&m,&k);
	for(int i = 0;i < m;i++){
		scanf("%d %d %d",&num,&s,&e);
		d[s] += num,d[e + 1] -= num;
	}
	for(int i = 1;i <= n;i++){
		a[i] = d[i] + a[i - 1];
		ans = max(ans,a[i] - k);
	}
	printf("%lld\n",ans);

	return 0;
}

