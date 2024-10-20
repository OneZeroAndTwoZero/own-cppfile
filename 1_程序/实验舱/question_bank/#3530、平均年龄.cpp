#include<bits/stdc++.h>
using namespace std;

double a,b,c;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%lf %lf %lf",&a,&b,&c);
    printf("%.3lf\n",(a + b + c) / 3);

	return 0;
}