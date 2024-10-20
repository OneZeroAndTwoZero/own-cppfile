#include<bits/stdc++.h>
using namespace std;

long long m,d,w;
long long k,i,j,cur;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%lld %lld %lld",&d,&m,&w);
    scanf("%lld %lld %lld",&i,&j,&k);
    k --,i --,j --;
    cur = k * m * d + j * d + i;
    printf("%c",(cur % w) + 'a');

    return 0;
}