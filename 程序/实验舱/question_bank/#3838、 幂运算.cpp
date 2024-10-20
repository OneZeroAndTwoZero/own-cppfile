#include<bits/stdc++.h>
using namespace std;

double a, b, c, x;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%lf %lf %lf", &a, &b, &c);
    x = b / c;
    printf("%.5lf\n", pow(a, x));

    return 0;
}