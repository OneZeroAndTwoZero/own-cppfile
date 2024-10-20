#include<bits/stdc++.h>
using namespace std;

int t;
long long n,k;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d",&t);
    while(t --){
        scanf("%lld %lld",&n,&k);
        if((k + 1) * k <= 2 * n){
            printf("Yes\n");
        }else{
            printf("No\n");
        }
    }

    return 0;
}