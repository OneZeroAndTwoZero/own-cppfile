#include<bits/stdc++.h>
using namespace std;

int n;
long long ans = 0;

int main(){
	scanf("%d",&n);
	for(int i = 0;i * 7 <= n;i++){
		if((n - 7 * i) % 4 == 0) ans ++;
	}
	printf("%lld\n",ans);

	return 0;
}

