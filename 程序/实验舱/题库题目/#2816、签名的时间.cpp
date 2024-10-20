#include<bits/stdc++.h>
using namespace std;

int n,k;
double ans = 0;
double x[1005],y[1005];

double d(double x1,double y1,double x2,double y2){
    double res = fabs(x1 - x2) * fabs(x1 - x2) + fabs(y1 - y2) * fabs(y1 - y2);
    return pow(res,0.5);
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d %d",&n,&k);
    for(int i = 0;i < n;i ++){
        scanf("%lf %lf",&x[i],&y[i]);
    }
    for(int i = 1;i < n;i ++){
        ans += d(x[i - 1],y[i - 1],x[i],y[i]);
        // cout << d(x[i - 1],y[i - 1],x[i],y[i]) << "[]\n";
    }
    ans *= k;
    ans /= 50.0;
    printf("%.0lf\n",ans);

	return 0;
}