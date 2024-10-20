#include<bits/stdc++.h>
using namespace std;

int t,n;
int a[200005] = {0};

int main(){
	scanf("%d",&t);
	while(t --){
		scanf("%d",&n);
		for(int i = 0;i <n;i++){
			scanf("%d",&a[i]);
		}
		sort(a,a + n);
		long long ans = a[0] - 1;
		a[0] = 1;
		for(int i = 1;i < n;i++){
			if(a[i] - a[i - 1] >= 2){
				ans += a[i] - a[i - 1] - 1;
				a[i] = a[i - 1] + 1;
			}
		}
		printf("%lld\n",ans);
	}

	return 0;
}

