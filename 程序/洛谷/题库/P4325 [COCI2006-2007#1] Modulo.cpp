#include<bits/stdc++.h>
using namespace std;

int t,ans;
int a[55] = {0};

int main(){
#ifndef ONLINE_JUDGE
    freopen("D:\\code\\data.in","r",stdin);
    freopen("D:\\code\\data.out","w",stdout);
#endif

    for(int i = 0;i < 10;i ++){
        scanf("%d",&t);
        a[t % 42] ++;
    }
    for(int i = 0;i < 42;i ++){
        ans += a[i] > 0;
    }
    printf("%d\n",ans);

    return 0;
}