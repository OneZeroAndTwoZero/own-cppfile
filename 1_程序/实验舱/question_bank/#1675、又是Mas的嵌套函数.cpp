#include<bits/stdc++.h>
using namespace std;

double x;
int n;

double operate(double x,int n){
    if(n == 1) return x / (x + 1.0);
    return x / (n + operate(x,n - 1));
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%lf %d",&x,&n);
    printf("%.2lf\n",operate(x,n));

    return 0;
}