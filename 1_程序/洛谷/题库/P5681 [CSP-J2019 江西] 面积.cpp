#include<bits/stdc++.h>
using namespace std;

long long a,b,c;

int main(){
#ifndef ONLINE_JUDGE
    freopen("D:\\code\\data.in","r",stdin);
    freopen("D:\\code\\data.out","w",stdout);
#endif

    scanf("%lld %lld %lld",&a,&b,&c);
    if(a * a > b * c){
        printf("Alice\n");
    }else{
        printf("Bob\n");
    }

    return 0;
}