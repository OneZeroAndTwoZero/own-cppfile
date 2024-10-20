#include<bits/stdc++.h>
using namespace std;

int t,n,tc,tm_;
long long ai,bi,ci,ans = 0;

int main(){
	scanf("%d",&t);
	while(t --){
		ans = 0;
		scanf("%d %d %d",&n,&tc,&tm_);
		for(int i = 0;i < n;i++){
			scanf("%lld %lld %lld",&ai,&bi,&ci);
			if(ai * tc + bi * tm_ > ci){
				if(ai > bi){
					ans += tc - floor((ci - bi * tm_) / (double)ai);
					tc = floor((ci - bi * tm_) / (double)ai);
				}else{
					ans += tm_ - floor((ci - ai * tc) / (double)bi);
					tm_ = floor((ci - ai * tc) / (double)bi);
				}
			}
			cout << ans << ";;;;;" << endl;
		}
		printf("%lld\n",ans);
	}

	return 0;
}

