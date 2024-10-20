#include<bits/stdc++.h>
using namespace std;

long long a,b;

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

    scanf("%lld %lld",&a,&b);
    if(a == 1){
        printf("1\n");
    }else{
        long long res = a;
        while(-- b){
            res *= a;
            if(res > 1e9){
                printf("-1\n");
                return 0;
            }
        }
        printf("%lld\n",res);
    }

	return 0;
}