#include<bits/stdc++.h>
using namespace std;

int T;
long long l,r,ans = 0;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    
    scanf("%d",&T);
    while(T --){
		ans = 0;
		scanf("%lld %lld",&l,&r);
		ans = (r / 2);
		for(long long i = 1;i <= min(l,r / 2);i ++){
			long long cur = ((r / i) - 1) * i;
			if(cur < l) ans --;
			// cout << (cur < l) << " ";
		}
		// cout << "\n";
		printf("%lld\n",ans);
	}

    return 0;
}
