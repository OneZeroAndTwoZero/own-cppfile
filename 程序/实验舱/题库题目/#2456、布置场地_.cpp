#include<bits/stdc++.h>
using namespace std;

long long x,y,a,b,c;
long long ans1 = 0,ans2 = 0,ans3 = 0;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%lld %lld %lld %lld %lld",&x,&y,&a,&b,&c);
    ans1 = x * a + y * b;
    ans2 = min(x,y) * 2 * c + (x - min(x,y)) * a + (y - min(x,y)) * b;
    ans3 = max(x,y) * 2 * c;
    printf("%lld\n",min({ans1,ans2,ans3}));

	return 0;
}