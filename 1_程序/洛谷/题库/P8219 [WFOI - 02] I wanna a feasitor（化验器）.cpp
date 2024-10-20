#include<bits/stdc++.h>
using namespace std;

long long l,r;

int main(){
    scanf("%lld %lld",&l,&r);
    if(r - l > 0 || r % 2 == 0){
        printf("%lld\n",r / 2);
    }else{
        for(int i = 0;i <= r / i;i ++){
            if(r % i == 0) printf("%lld\n",r / i);
        }
    }

    return 0;
}

