#include<bits/stdc++.h>
using namespace std;

int n,a[1005] = {0},ans = 1005;

int main(){
#ifndef ONLINE_JUDGE
    freopen("D:\\code\\data.in","r",stdin);
    freopen("D:\\code\\data.out","w",stdout);
#endif

    scanf("%d",&n);
    for(int i = 0;i < n;i ++){
        scanf("%d",&a[i]);
        ans = min(ans,a[i]);
    }
    printf("%d\n",ans);

    return 0;
}