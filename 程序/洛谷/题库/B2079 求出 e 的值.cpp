#include<bits/stdc++.h>
using namespace std;

int n;
double ans = 1;

long long jie(int n){
    long long res = 1;
    for(int i = 1;i <= n;i ++){
        res *= i;
    }
    return res;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("D:\\code\\data.in","r",stdin);
    freopen("D:\\code\\data.out","w",stdout);
#endif

    scanf("%d",&n);
    for(int i = 1;i <= n;i ++){
        ans += 1.0 / jie(i);
    }
    printf("%.10lf\n",ans);

    return 0;
}