#include<bits/stdc++.h>
using namespace std;

double x,xt,y,yt,ans;

int main(){
    scanf("%lf %lf %lf %lf",&x,&y,&xt,&yt);
    ans = sqrt((x - xt) * (x - xt) + (y - yt) * (y - yt));
    printf("%.3lf\n",ans);

    return 0;
}