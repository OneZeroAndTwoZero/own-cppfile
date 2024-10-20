#include<bits/stdc++.h>
using namespace std;

int n,m,p,t,ans = 0x3f3f3f3f;
int sum[200005] = {0};

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

	scanf("%d %d %d",&n,&m,&p);
	for(int i = 0;i < p;i ++){
		scanf("%d",&t);
		sum[t] ++;
	}
	for(int i = 1;i <= n;i ++){
		sum[i] += sum[i - 1];
	}
	for(int i = m;i <= n;i ++){
		ans = min(ans,sum[i] - sum[i - m]);
	}
	printf("%d\n",ans);

	return 0;
}