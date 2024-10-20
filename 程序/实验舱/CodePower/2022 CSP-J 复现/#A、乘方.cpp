#include<bits/stdc++.h>
using namespace std;

long long a,b,res = 1;

int main(){
    freopen("pow.in","r",stdin);
    freopen("pow.out","w",stdout);

    scanf("%lld %lld",&a,&b);
    if(a == 1){
        printf("%lld\n",1LL);
    }else{
        for(long long i = 0;i < b;++ i){
            res *= a;
            if((int)res != res){
                printf("-1\n");
                return 0;
            }
        }
        printf("%lld\n",res);
    }

	return 0;
}