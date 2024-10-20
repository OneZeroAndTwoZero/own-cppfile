#include<bits/stdc++.h>
using namespace std;

long long a,b,c,k;
long long mina,minb,minc;
int op,m;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%lld %lld %lld %d",&a,&b,&c,&m);
    while(m --){
        scanf("%d %lld",&op,&k);
        if(op == 1){
            mina = min(a,max(k,mina));
        }else if(op == 2){
            minb = min(b,max(k,minb));
        }else{
            minc = min(c,max(k,minc));
        }
        printf("%lld\n",(a - mina) * (b - minb) * (c - minc));
    }

	return 0;
}