#include<bits/stdc++.h>
using namespace std;

int a,ans = 0;

int main(){
#ifndef ONLINE_JUDGE
    freopen("D:\\code\\data.in","r",stdin);
    freopen("D:\\code\\data.out","w",stdout);
#endif

    scanf("%d",&a);
    while(a != 0){
        ans ++;
        a /= 2;
    }
    printf("%d\n",ans);

    return 0;
}