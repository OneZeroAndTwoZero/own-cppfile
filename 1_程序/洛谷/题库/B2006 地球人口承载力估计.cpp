#include<bits/stdc++.h>
using namespace std;

double x,a,y,b;

int main(){
    scanf("%lf %lf %lf %lf",&x,&a,&y,&b);
    double ans = (x * a - y * b) / (a - b);
    printf("%.2lf\n",ans);

    return 0;
}