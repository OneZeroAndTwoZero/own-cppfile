#include<bits/stdc++.h>
using namespace std;

long long r;
const double pi = 3.1415926;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%lld", &r);
    printf("%.0lf\n", pi * r * r);
    printf("%lld\n", 2 * r * r);

    return 0;
}