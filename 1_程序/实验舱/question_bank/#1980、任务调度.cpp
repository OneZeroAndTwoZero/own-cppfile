#include<bits/stdc++.h>
using namespace std;

int n,r;
int a[100005];
long long cur = 0,ans = 0;

void make(){
    for(int i = 0;i < n;i ++){
        a[i] = (r % 100) + 1;
        r = (r * 6807 + 2831) % 201701;
    }
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %d",&n,&r);
    make();
    sort(a,a + n);
    for(int i = 0;i < n;i ++){
        ans += cur;
        cur += a[i];
        ans += a[i];
    }
    printf("%lld\n",ans);

    return 0;
}