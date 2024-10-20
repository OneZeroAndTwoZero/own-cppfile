#include<bits/stdc++.h>
using namespace std;

long long n,x,y;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%lld",&n);
    x = -2 * ((n + 1) / 4);
    if((n + 1) % 4 >= 2) x += (n - n % 4) + 1;
    y = -2 * (n / 4);
    if(n % 4 >= 2) y += (n - n % 4) + 2;
    printf("%lld %lld\n",x,y);

	return 0;
}