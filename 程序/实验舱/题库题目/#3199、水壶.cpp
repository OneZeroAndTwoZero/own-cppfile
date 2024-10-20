#include<bits/stdc++.h>
using namespace std;

int n,k,ans = 0;
int a[2000006] = {0};

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

    scanf("%d %d",&n,&k);
    for(int i = 1;i <= n;i ++){
        scanf("%d",&a[i]);
        a[i] += a[i - 1];
        if(i >= k) ans = max(ans,a[i] - a[i - k - 1]);
    }
    printf("%d\n",ans);

	return 0;
}