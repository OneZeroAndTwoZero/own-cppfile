#include<bits/stdc++.h>
using namespace std;

long long n,x,y,ans;

long long cheng(long long a,long long b){
	if(b == 0) return 1;
	if(b & 1){
		return ((cheng(a,b / 2) % 1000000007) * (cheng(a,b / 2) % 1000000007) * a) % 1000000007;
	}else{
		return ((cheng(a,b / 2) % 1000000007) * (cheng(a,b / 2) % 1000000007)) % 1000000007;
	}
}

long long j(long long a){
	return (a * (a + 1) / 2) % 1000000007;
}

int main(){
	scanf("%lld %lld %lld",&n,&x,&y);
	ans = cheng(2,n) - 1;
	ans -= (j(n) / (j(x) * j(n - x)));
	if(x != y) ans -= (j(n) / (j(y) * j(n - y)));
	while(ans < 0){
		ans += 1000000007;
	}
	printf("%lld\n",ans);

	return 0;
}

