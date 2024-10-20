#include<bits/stdc++.h>
using namespace std;

long long a,b,c;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%lld",&c);
    if(c == -1){
        a = 2,b = -3;
    }else if(c == 1){
        a = -2,b = 3;
    }else if(c <= 0){
        a = -1,b = c + 1;
    }else{
        a = 1,b = c - 1;
    }
    printf("%lld %lld\n",a,b);

    return 0;
}
