#include<bits/stdc++.h>
using namespace std;

long long a,b;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%lld %lld",&a,&b);
    for(long long i = 2;i * i <= a && a != 1 && b != 1;i ++){
        if(a % i == 0){
            while(a % i == 0) a /= i;
            while(b % i == 0) b /= i;
        }
    }
    if(a != 1){
        while(b % a == 0) b /= a;
    }
    if(b == 1){
        printf("Yes\n");
    }else{
        printf("No\n");
    }

    return 0;
}