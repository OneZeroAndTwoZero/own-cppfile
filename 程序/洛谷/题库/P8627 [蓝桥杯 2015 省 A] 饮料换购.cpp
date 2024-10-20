#include<bits/stdc++.h>
using namespace std;

int n,ans;

int main(){
#ifndef ONLINE_JUDGE
    freopen("D:\\code\\data.in","r",stdin);
    freopen("D:\\code\\data.out","w",stdout);
#endif

    scanf("%d",&n);
    ans = n;
    while(n >= 3){
        ans += n / 3;
        n = n / 3 + n % 3;
    }
    printf("%d\n",ans);

    return 0;
}