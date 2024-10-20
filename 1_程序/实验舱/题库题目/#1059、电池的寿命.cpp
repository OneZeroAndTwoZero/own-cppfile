#include<bits/stdc++.h>
using namespace std;

int n;
double t,ans = 0,max_ = 0;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    while(~scanf("%d",&n)){
        ans = 0,max_ = 0;
        for(int i = 0;i < n;i ++){
            scanf("%lf",&t);
            max_ = max(max_,t);
            ans += t;
        }
        if(max_ > (ans - max_)) printf("%.1lf\n",ans - max_);
        else printf("%.1lf\n",ans / 2.0);
    }

	return 0;
}