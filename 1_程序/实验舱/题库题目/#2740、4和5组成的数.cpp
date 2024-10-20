#include<bits/stdc++.h>
using namespace std;

int n,ans = 0;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d",&n);
    for(int i = 0;i <= n / 5;i ++)
        if((n - i * 5) % 4 == 0)
            ans ++;
    printf("%d\n",ans);

	return 0;
}