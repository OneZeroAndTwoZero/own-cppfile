#include<bits/stdc++.h>
using namespace std;

long long x,y,a,b,c;
long long ans = 0,t;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%lld %lld %lld %lld %lld",&x,&y,&a,&b,&c);
    t = max(x,y) * 2 * c;
    while(x && y){
        ans += min(a + b,2 * c);
        x --,y --;
    }
    ans += x * a + y * b;
    printf("%lld\n",min(ans,t));

    return 0;
}