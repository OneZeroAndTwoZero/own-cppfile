#include<bits/stdc++.h>
using namespace std;

int a1,a2,n,d;
long long ans = 0;

int main(){
#ifndef ONLINE_JUDGE
    freopen("D:\\code\\data.in","r",stdin);
    freopen("D:\\code\\data.out","w",stdout);
#endif

    scanf("%d %d %d",&a1,&a2,&n);
    d = a2 - a1;
    long long now = a1;
    for(int i = 1;i <= n;i ++){
        ans += now;
        now += d;
    }
    printf("%lld\n",ans);

    return 0;
}