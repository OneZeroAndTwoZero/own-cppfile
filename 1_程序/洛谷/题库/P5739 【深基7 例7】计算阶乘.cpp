#include<bits/stdc++.h>
using namespace std;

int n;

long long suan(int a){
    if(a == 1) return 1LL;
    return a * suan(a - 1);
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("D:\\code\\data.in","r",stdin);
    freopen("D:\\code\\data.out","w",stdout);
#endif

    scanf("%d",&n);
    printf("%lld\n",suan(n));

    return 0;
}