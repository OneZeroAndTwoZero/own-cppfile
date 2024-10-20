#include<bits/stdc++.h>
using namespace std;

long long x,z,ans;
double c;

int main(){
    scanf("%lld %lld %lf",&x,&z,&c);
    x -= 2 * z;
    ans = ceil((double)x / c);
    printf("%lld\n",ans);

    return 0;
}