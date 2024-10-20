#include<bits/stdc++.h>
using namespace std;

long long l,r,d;

void out(){
    if(l <= d && r >= d){
        printf("YES\n");
        return;
    }
    long long num = r / d;
    if((num - 1) * d >= l){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
}

int main(){
// #ifndef ONLINE_JUDGE
//     freopen("data.in","r",stdin);
//     freopen("data.out","w",stdout);
// #endif

    scanf("%lld %lld %lld",&l,&r,&d);
    out();

	return 0;
}