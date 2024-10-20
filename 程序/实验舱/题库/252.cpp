#include<bits/stdc++.h>
using namespace std;

int a[20005] = {0};
int n,t,dd,ans;

int main(){
	scanf("%d",&n);
	for(int i = 0;i < n;i++){
		scanf("%d",&t);
		a[t + 10000] ++;
	}
	ans = 0,dd = 0;
	for(int i = 0;i < 10000;i ++){
		t = min(a[i],a[10000 + (10000 - i)]);
		ans += t;
		a[i] -= t;
		a[10000 + (10000 - i)] -= t;
		dd += a[i] + a[10000 + (10000 - i)];
	}
	ans += min(dd,a[10000]);
	a[10000] -= min(dd,a[10000]);
	ans += a[10000] / 2;
	printf("%d\n",ans);

	return 0;
}

