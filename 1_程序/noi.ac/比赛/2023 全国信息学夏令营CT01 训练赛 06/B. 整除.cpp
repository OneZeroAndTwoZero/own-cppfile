#include<bits/stdc++.h>
using namespace std;

int t;
long long a,b,ans;

int main(){
// #ifndef ONLINE_JUDGE
//     freopen("data.in","r",stdin);
//     freopen("data.out","w",stdout);
// #endif

    scanf("%d",&t);
    while(t --){
        scanf("%lld %lld",&a,&b);
        ans = b / a * a;
        while(ans < b) ans += a;
        printf("%lld\n",ans - b);
    }

	return 0;
}