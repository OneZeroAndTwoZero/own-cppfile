#include<bits/stdc++.h>
using namespace std;

double a,ans;

int main(){
    scanf("%lf",&a);
    if(a < 5) ans = -1 * a + 2.5;
    else if(a < 10) ans = 2 - 1.5 * (a - 3) * (a - 3);
    else ans = a / 2 - 1.5;
    printf("%.3lf\n",ans);

    return 0;
}