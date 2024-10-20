#include<bits/stdc++.h>
using namespace std;

double a,b,c,s;
const double p = 3.14159;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%lf %lf %lf",&a,&b,&c);
    s = (a + b) * c / 2.0;
    s -= (c / 2.0) * (c / 2.0) * p;
    printf("%.2lf\n",s);

    return 0;
}