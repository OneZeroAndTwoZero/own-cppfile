#include<bits/stdc++.h>
using namespace std;

double h, l;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%lf %lf", &h, &l);
    printf("%.114lf\n", ((l / (2 * h) * l) - (h / (2 * h) * h)));

    return 0;
}