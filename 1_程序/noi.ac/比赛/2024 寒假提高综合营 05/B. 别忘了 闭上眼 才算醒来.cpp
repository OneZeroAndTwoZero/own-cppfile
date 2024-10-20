#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

int n,ans = 0;
int a[1000006];
int maxl = 0,maxr = 0;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d",&n);
    for(int i = 1;i <= n;i ++){
        scanf("%d",&a[i]);
    }
    for(int i = 1;i <= n;i ++){
        if(maxr > a[i]) ans ++;
        maxr = max(maxr,a[i]);
    }
    for(int i = n;i >= 1;i --){
        if(maxl > a[i]) ans ++;
        maxl = max(maxl,a[i]);
    }
    printf("%d\n",ans);

    return 0;
}