#include<bits/stdc++.h>
using namespace std;

int n,x;
long long ans = 0;

int main(){
#ifndef ONLINE_JUDGE
    freopen("D:\\code\\data.in","r",stdin);
    freopen("D:\\code\\data.out","w",stdout);
#endif

    scanf("%d %d",&x,&n);
    ans = pow((x + 1),n);
    printf("%lld\n",ans);

    return 0;
}