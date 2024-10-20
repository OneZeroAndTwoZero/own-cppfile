#include<bits/stdc++.h>
using namespace std;

double r1,r2,ans;

int main(){
    scanf("%lf %lf",&r1,&r2);
    ans = 1.0 / ((1.0 / r1) + (1.0 / r2));
    printf("%.2lf\n",ans);

    return 0;
}