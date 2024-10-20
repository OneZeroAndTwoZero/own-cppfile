#include<bits/stdc++.h>
using namespace std;

int n,m,t,now,ans = 1;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d %d",&n,&m);
    for(int i = 0;i < n;i ++){
        scanf("%d",&t);
        now += t;
        if(now > m){
            now = t;
            ++ ans;
        }
    }
    printf("%d\n",ans);

	return 0;
}