#include<bits/stdc++.h>
using namespace std;

int t;
long long l,r,ans;

int main(){
	scanf("%d",&t);
	while(t--){
		scanf("%lld %lld",&l,&r);
		ans = sqrt(r) - sqrt(l - 1);
		printf("%lld\n",ans);
	}

	return 0;
}

