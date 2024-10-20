#include<bits/stdc++.h>
using namespace std;

int n,d;
long long ans = 0;
int a[100005] = {0};

int main(){
	scanf("%d",&n);
	for(int i = 0;i < n;i++){
		scanf("%d",&a[i]);
	}
	sort(a,a + n);
	if(n & 1){
		d = n / 2;
	}else{
		d = n / 2 - 1;
	}
	for(int i = 0;i < d;i++){
		ans += abs(a[n - i - 1] - a[i]);
	}
	if(!(n & 1)) ans += abs(a[d + 1] - a[d]);
	printf("%lld\n",ans);

	return 0;
}

