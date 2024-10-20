#include<bits/stdc++.h>
using namespace std;

int n,x;
int a[2000005] = {0};
long long ans = 0;

int main(){
#ifndef ONLINE_JUDGE
    freopen("D:\\code\\data.in","r",stdin);
    freopen("D:\\code\\data.out","w",stdout);
#endif

    scanf("%d %d",&n,&x);
    for(int i = 0;i < n;i ++){
        scanf("%d",&a[i]);
        ans = ans + a[i] + x;
    }
    printf("%lld\n",ans);

    return 0;
}