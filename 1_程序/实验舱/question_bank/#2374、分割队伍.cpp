#include<bits/stdc++.h>
using namespace std;

int n,ans = 0x3f3f3f3f;
int a[100005];

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
        a[i] += a[i - 1];
    }
    for(int i = 1;i < n;i ++){
        ans = min(ans,abs(a[i] - (a[n] - a[i])));
    }
    printf("%d\n",ans);

    return 0;
}