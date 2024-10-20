#include<bits/stdc++.h>
using namespace std;

int n,ans = 0;

int main(){
#ifndef ONLINE_JUDGE
    freopen("D:\\code\\data.in","r",stdin);
    freopen("D:\\code\\data.out","w",stdout);
#endif

    scanf("%d",&n);
    for(int i = 1;i <= n;i ++){
        ans += i;
    }
    printf("%d\n",ans);

    return 0;
}