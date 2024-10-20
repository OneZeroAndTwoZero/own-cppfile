#include<bits/stdc++.h>
using namespace std;

int n;
long long ans = 0x3f3f3f3f3f3f3f3f,a[25];

long long operate(int l,int r){
	long long res = 0;
	for(int i = l;i <= r;i ++){
		res |= a[i];
	}
	return res;
}

void dfs(long long sum,int pos){
	if(pos == n){
		ans = min(ans,sum);
		return;
	}
	for(int i = pos;i < n;i ++){
		dfs(sum ^ operate(pos,i),i + 1);
	}
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

	scanf("%d",&n);
	for(int i = 0;i < n;i ++){
		scanf("%lld",&a[i]);
	}
	dfs(0LL,0);
	printf("%lld\n",ans);

	return 0;
}