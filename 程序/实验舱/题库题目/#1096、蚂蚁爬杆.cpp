#include<bits/stdc++.h>
using namespace std;

int n,m,t;
int ansmax = 0,ansmin = 0;

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

    scanf("%d %d",&n,&m);
    while(n --){
        scanf("%d",&t);
        int l = t,r = m - t;
        ansmax = max(max(l,r),ansmax);
        ansmin = max(min(l,r),ansmin);
    }
    printf("%d %d\n",ansmin,ansmax);

	return 0;
}
