#include<bits/stdc++.h>
using namespace std;

int n,d;
int a[100005] = {0};
long long ans = 0;

int main(){
	scanf("%d %d",&n,&d);
	for(int i = 0;i < n;i++){
		scanf("%d",&a[i]);
	}
	for(int i = 0;i < n;i++){
		ans += (upper_bound(a,a + n,a[i] + d) - lower_bound(a,a + n,a[i] - d)) - 1;
	}
	printf("%lld\n",ans / 2);

	return 0;
}

