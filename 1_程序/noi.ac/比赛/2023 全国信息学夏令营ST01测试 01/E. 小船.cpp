#include<bits/stdc++.h>
using namespace std;

long long n,m,ans = 0;
long long a[100005] = {0};

int main(){
//#ifndef ONLINE_JUDGE
//    freopen("data.in","r",stdin);
//    freopen("data.out","w",stdout);
//#endif

	scanf("%lld %lld",&n,&m);
	for(int i = 0;i < n;i ++){
		scanf("%lld",&a[i]);
	}
	sort(a,a + n);
	int l = 0,r = n - 1;
	while(l <= r){
		if(l == r){
			ans ++;
			break;
		}
		if(a[l] + a[r] <= m){
			l ++,r --;
			ans ++;
		}else{
			r --;
			ans ++;
		}
	}
	printf("%lld\n",ans);

	return 0;
}

