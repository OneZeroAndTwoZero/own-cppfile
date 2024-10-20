#include<bits/stdc++.h>
using namespace std;

int n,l = 1,r = 1e9,ans = -1;
long long q;
int a[200005];

bool check(int x){
    long long res = 0;
    for(int i = 0;i < n;i ++)
        res += (a[i] - 1) / x;
    return res <= q;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d %lld",&n,&q);
    for(int i = 0;i < n;i ++)
        scanf("%d",&a[i]);
    while(l <= r){
        int mid = (l + r) >> 1;
        if(check(mid))
            ans = mid,r = mid - 1;
        else
            l = mid + 1;
    }
    printf("%d\n",ans);

	return 0;
}