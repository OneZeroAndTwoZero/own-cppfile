#include<bits/stdc++.h>
using namespace std;

int n,t,ans = 0;

int main(){
#ifndef ONLINE_JUDGE
    freopen("D:\\code\\data.in","r",stdin);
    freopen("D:\\code\\data.out","w",stdout);
#endif

    scanf("%d",&n);
    while(n --){
        scanf("%d",&t);
        ans = ans ^ t;
    }
    printf("%d\n",ans);

    return 0;
}

