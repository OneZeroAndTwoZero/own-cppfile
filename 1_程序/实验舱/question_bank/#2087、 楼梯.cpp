#include<bits/stdc++.h>
using namespace std;

double x, y, c, l = 0.00001, r, ans = -1;

bool check(double t){ // is h <= c
    double h1 = sqrt(x * x - t * t);
    double h2 = sqrt(y * y - t * t);
    double res = (h1 * h2) / (h1 + h2);
    return res <= c;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%lf %lf %lf", &x, &y ,&c);
    r = min(x, y);
    while (r - l >= 0.00001){
        double mid = (l + r) / 2.0;
        if (check(mid)){
            ans = mid;
            r = mid;
        }else{
            l = mid;
        }
    }
    printf("%.3lf\n",ans);

    return 0;
}