#include<bits/stdc++.h>
using namespace std;

int m,n;

int akm(int m,int n){
    if(m == 0) return n + 1;
    if(n == 0) return akm(m - 1,1);
    return akm(m - 1,akm(m,n - 1));
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("D:\\code\\data.in","r",stdin);
    freopen("D:\\code\\data.out","w",stdout);
#endif

    scanf("%d %d",&m,&n);
    printf("%d\n",akm(m,n));

    return 0;
}