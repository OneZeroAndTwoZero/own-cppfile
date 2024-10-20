#include<bits/stdc++.h>
using namespace std;

double x;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%lf", &x);
    printf("%.41lf\n", sqrt(x * (x + 987654.0)));

    return 0;
}