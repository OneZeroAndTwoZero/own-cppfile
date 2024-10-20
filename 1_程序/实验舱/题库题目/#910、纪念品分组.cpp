#include<bits/stdc++.h>
using namespace std;

int w,n,ans = 0;
int l,r;
int a[100005] = {0};

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d %d",&w,&n);
    for(int i = 0;i < n;i ++) scanf("%d",&a[i]);
    sort(a,a + n);
    l = 0,r = n - 1;
    while(l < r){
        if(a[l] + a[r] <= w) l ++;
        r --,ans ++;
    }
    if(l == r) ans ++;
    printf("%d\n",ans);

	return 0;
}