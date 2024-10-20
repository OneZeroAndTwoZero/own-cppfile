#include<bits/stdc++.h>
using namespace std;

int n,m;
long long h[200005],t;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %d",&n,&m);
    for(int i = 1;i <= n;i ++){
        scanf("%lld",&h[i]);
    }
    while(m --){
        scanf("%d",&t);
        long long now = 0;
        for(int i = 1;i <= n;i ++){
            if(now >= t) break;
            if(now >= h[i]) continue;
            long long cur = min(h[i],t) - now;
            now = h[i];
            h[i] += cur;
        }
    }
    for(int i = 1;i <= n;i ++){
        printf("%lld\n",h[i]);
    }

    return 0;
}