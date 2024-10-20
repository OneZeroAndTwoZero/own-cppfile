#include<bits/stdc++.h>
using namespace std;

double a, b;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%lf %lf", &a, &b);
    printf("%.5lf\n", sqrt(a * a + b * b));

    return 0;
}