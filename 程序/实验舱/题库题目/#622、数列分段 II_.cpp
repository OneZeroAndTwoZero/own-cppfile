#include<bits/stdc++.h>
using namespace std;

int n,m,ans = -1;
int l = 0,r = 1e9;
int a[100005] = {0};

bool check(int x){
    int res = 1,now = 0;
    for(int i = 0;i < n;i ++){
        now += a[i];
        if(now > x) res ++,now = a[i];
    }
    return res <= m;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d %d",&n,&m);
    for(int i = 0;i < n;i ++){
        scanf("%d",&a[i]);
        l = max(l,a[i]);
    }
    while(l <= r){
        int mid = (l + r) >> 1;
        if(check(mid)) ans = mid,r = mid - 1;
        else l = mid + 1;
    }
    printf("%d\n",ans);

	return 0;
}