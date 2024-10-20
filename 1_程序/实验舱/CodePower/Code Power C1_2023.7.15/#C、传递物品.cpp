#include<bits/stdc++.h>
using namespace std;

long long n,t,p,ans;

int main(){
//#ifndef ONLINE_JUDGE
//    freopen("D:\\code\\data.in","r",stdin);
//    freopen("D:\\code\\data.out","w",stdout);
//#endif

	scanf("%lld %lld",&n,&t);
	if(n == 1){
		printf("1\n");
		return 0;
	}
	p = t / (n - 1);
	t %= (n - 1);
	if(p & 1) ans = n - t;
	else ans = 1 + t;
	printf("%lld\n",ans);

	return 0;
}

