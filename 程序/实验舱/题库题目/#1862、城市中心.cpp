#include<bits/stdc++.h>
using namespace std;

int n,l,r;
int x[100005],y[100005];
long long ans = 0;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d",&n);
    for(int i = 0;i < n;i ++)
        scanf("%d %d",&x[i],&y[i]);
    sort(x,x + n);
    sort(y,y + n);
    l = 0,r = n - 1;
    while(l < r){
        ans += x[r] - x[l];
        ans += y[r] - y[l];
        l ++,r --;
    }
    printf("%lld\n",ans);

	return 0;
}