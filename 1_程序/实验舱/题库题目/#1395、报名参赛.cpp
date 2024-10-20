#include<bits/stdc++.h>
using namespace std;

int n;
long long b,ans;

int main(){
	scanf("%d",&n);
	for(int i = 0;i < n;i++){
		scanf("%lld",&b);
		b = abs(b);
		ans = max(b,ans);
	}
	printf("%lld\n",ans);

	return 0;
}

