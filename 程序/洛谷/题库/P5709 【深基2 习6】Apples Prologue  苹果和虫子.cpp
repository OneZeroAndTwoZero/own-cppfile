#include<bits/stdc++.h>
using namespace std;

int m,t,s,ans;

int main(){
#ifndef ONLINE_JUDGE
    freopen("D:\\code\\data.in","r",stdin);
    freopen("D:\\code\\data.out","w",stdout);
#endif

    scanf("%d %d %d",&m,&t,&s);
    if(t == 0) ans = 0;
    else {
        ans = ceil((double) s / t);
        ans = max(0,m - ans);
    }
    printf("%d\n",ans);

    return 0;
}

