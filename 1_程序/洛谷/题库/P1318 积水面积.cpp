#include<bits/stdc++.h>
using namespace std;

int n,ans = 0;
int a[100005] = {0};
int max0[100005] = {0};
int maxn[100005] = {0};

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

    scanf("%d",&n);
    for(int i = 1;i <= n;i ++)
        scanf("%d",&a[i]);
    for(int i = n;i >= 1;i --)
        maxn[i] = max(maxn[i + 1],a[i]);
    for(int i = 0;i < n;i ++){
        max0[i] = max(max0[i - 1],a[i]);
        ans += max(0,min(max0[i - 1],maxn[i + 1]) - a[i]);
    }
    printf("%d\n",ans);

	return 0;
}