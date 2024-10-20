#include<bits/stdc++.h>
using namespace std;

double r,v;
const double p = 3.14;

int main(){
    scanf("%lf",&r);
    v =  p * r * r * r * (4.0 / 3.0);
    printf("%.5lf\n",v);

    return 0;
}