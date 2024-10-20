#include<bits/stdc++.h>
using namespace std;

long long l,r;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%lld %lld",&l,&r);
    if(l != r) printf("1 ");
    else printf("%lld ",l);
    printf("%lld %lld ",r,l);
    if(l != r) printf("%lld\n",r * (r - 1));
    else printf("%lld\n",r);

    return 0;
}