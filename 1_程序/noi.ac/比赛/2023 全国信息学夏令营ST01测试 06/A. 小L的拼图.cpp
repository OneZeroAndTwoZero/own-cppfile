#include<bits/stdc++.h>
using namespace std;

int t;
long long k,n,m;
bool ok = 1;

int main(){
// #ifndef ONLINE_JUDGE
//     freopen("data.in","r",stdin);
//     freopen("data.out","w",stdout);
// #endif

    scanf("%d",&t);
    while(t --){
        scanf("%lld %lld %lld",&k,&n,&m);
        ok = 1;
        if(n * m > k * 2) ok = 0;
        else if((n % 2LL == 1) && (m % 2LL == 1)) ok = 0;
        else ok = 1;
        if(ok) printf("YES\n");
        else printf("NO\n");
    }

	return 0;
}