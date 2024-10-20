#include<bits/stdc++.h>
using namespace std;

long long a,b,n,ans;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%lld %lld %lld",&a,&b,&n);
    while(a <= n && b <= n){
        if(a < b) a += b;
        else b += a;
        ans ++;
    }
    printf("%lld\n",ans);

	return 0;
}