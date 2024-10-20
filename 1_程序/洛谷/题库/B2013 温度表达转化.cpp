#include<bits/stdc++.h>
using namespace std;

double f,ans;

int main(){
    scanf("%lf",&f);
    ans = 5.0 * (f - 32) / 9.0;
    printf("%.5lf\n",ans);

    return 0;
}