#include<bits/stdc++.h>
using namespace std;

int n,m;
long long t,sum;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %d",&n,&m);
    while(n --){
        printf("%lld%c",sum / m," \n"[n == 0]);
        scanf("%lld",&t);
        sum += t;
    }

    return 0;
}