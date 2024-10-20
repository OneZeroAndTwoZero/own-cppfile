#include<bits/stdc++.h>
using namespace std;

int n,pos;
int maxn = -0x3f3f3f3f,minn = 0x3f3f3f3f;
int a[1 << 22];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d",&n);
    pos = (1 << n) - 1;
    for(int i = 1;i <= pos;i ++){
        scanf("%d",&a[i]);
        if(i != 1 && a[i >> 1] == 0) a[i] = 0;
    }
    for(int i = 1;i <= pos;i ++){
        if(a[i << 1] == 0 || a[(i << 1) + 1] == 0) continue;
        int t = __gcd(a[i << 1],a[(i << 1) + 1]);
        minn = min(minn,t),maxn = max(maxn,t);
    }
    printf("%d %d\n",maxn,minn);

    return 0;
}