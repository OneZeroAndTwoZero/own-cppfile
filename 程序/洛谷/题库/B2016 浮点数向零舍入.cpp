#include<bits/stdc++.h>
using namespace std;

double n;

int main(){
    scanf("%lf",&n);
    if(n > 0) n = floor(n);
    else n = ceil(n);
    printf("%.0lf\n",n);

    return 0;
}