#include<bits/stdc++.h>
using namespace std;

double n;

int main(){
    scanf("%lf",&n);
    if(n < 0){
        n = -1 * n;
    }
    printf("%.2lf\n",n);

    return 0;
}