#include<bits/stdc++.h>
using namespace std;

int k;
long long n,e,d,m,der,s,p,q;

int main(){
    freopen("decode.in","r",stdin);
    freopen("decode.out","w",stdout);

    scanf("%d",&k);
    while(k --){
        scanf("%lld %lld %lld",&n,&e,&d);
        m = n - e * d + 2;
        der = m * m - 4 * n;
        if(der >= 0) s = sqrt(der);
        if(der < 0 || s * s != der || (m + s) & 1){
            printf("NO\n");
        }else{
            p = (m - s) >> 1;
            q = (m + s) >> 1;
            printf("%lld %lld\n",p,q);
        }
    }

	return 0;
}