#include<bits/stdc++.h>
using namespace std;

long long x;
int bit[105] = {0};
int pos = 0;

void out(){
    for(int i = 63;i >= 0;i --)
        printf("%d",bit[i]);
    printf("\n");
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%lld",&x);
    bit[63] = x < 0;
    x = abs(x);
    while(x)
        bit[pos ++] = x & 1,x /= 2;
    out();
    if(!bit[63]) return 0;
    for(int i = 0;i < 63;i ++) bit[i] = !bit[i];
    out();
    bit[0] ++;
    for(int i = 1;i < 64;i ++)
        bit[i] += bit[i - 1] / 2,bit[i - 1] %= 2;
    out();

	return 0;
}