#include<bits/stdc++.h>
using namespace std;

double a,b,c,d;
double y,p,q;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
    for(double x = -100.0;x <= 100.0;x += 0.001){
        y = x + 0.001;
        p = x * x * x * a + x * x * b + x * c + d;
        q = y * y * y * a + y * y * b + y * c + d;
        if(p * q < 0){
            printf("%.2lf ",x);
        }
    }

    return 0;
}