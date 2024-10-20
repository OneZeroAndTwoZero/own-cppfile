#include<bits/stdc++.h>
#define __len(x) (((1LL << (int)(3.3 * x + 1)) + 15))
using namespace std;

long long m;
long long curh = 0,curm = 0,curs = 0;

void solve(long long x){
    curh += 5 * x;
    curm += 48 * x;
    curs += 46 * x;
}

void solve4(long long x){
    x /= 4;
    curh -= x * 24;
}

void solve100(long long x){
    x /= 100;
    curh += x * 24;
}

void solve400(long long x){
    x /= 400;
    curh -= x * 24;
}

void operate(){
    curm += curs / 60,curs %= 60;
    if(curs < 0) curs += 60,curm -= 1;
    curh += curm / 60,curm %= 60;
    if(curm < 0) curm += 60,curh -= 1;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%lld",&m);
    solve(m);
    solve4(m);
    solve100(m);
    solve400(m);
    operate();
    printf("%lld %lld %lld\n",curh,curm,curs);

    return 0;
}