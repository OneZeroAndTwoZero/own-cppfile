#include<bits/stdc++.h>
using namespace std;

int n,m;
long long a[1000006],b[1000006];
long long x;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    
    scanf("%d %d",&n,&m);
    for(int i = 0;i < n;i ++){
        scanf("%lld",&a[i]);
    }
    sort(a,a + n);
    x = a[1] - a[0];
    for(int i = 2;i < n;i ++){
        x = __gcd(x,a[i] - a[i - 1]);
    }
    for(int i = 0;i < m;i ++){
        scanf("%lld",&b[i]);
        printf("%lld\n",__gcd(a[0] + b[i],x));
    }

    return 0;
}
