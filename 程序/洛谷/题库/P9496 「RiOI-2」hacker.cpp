#include<bits/stdc++.h>
using namespace std;

int T;
long long n,m;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d",&T);
    while(T --){
        scanf("%lld %lld",&n,&m);
        if(n == m){
            printf("0\n");
        }else if(((n & m) == n) || ((n | m) == n)){
            printf("1\n");
        }else{
            printf("2\n");
        }
    }

    return 0;
}