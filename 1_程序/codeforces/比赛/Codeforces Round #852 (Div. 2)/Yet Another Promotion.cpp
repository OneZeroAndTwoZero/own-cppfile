#include<bits/stdc++.h>
using namespace std;

int t;
long long a,b,n,m;
long long ans;

int main(){
	scanf("%d",&t);
	while(t --){
		scanf("%lld %lld %lld %lld",&a,&b,&n,&m);
		if(a * m < b * (m + 1)){
			ans = a * (n / (m + 1)) * m;
			ans += min(a,b) * (n % (m + 1));
		}else{
			ans = b * n;
		}
		printf("%lld\n",ans);
	}

	return 0;
}

