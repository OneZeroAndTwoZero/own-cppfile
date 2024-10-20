#include<bits/stdc++.h>
using namespace std;

int n;

int main(){
#ifndef ONLINE_JUDGE
    freopen("D:\\code\\data.in","r",stdin);
    freopen("D:\\code\\data.out","w",stdout);
#endif

    scanf("%d",&n);
    if(n < 100){
        printf("00\n");
    }else if(n < 1000){
        printf("0\n");
    }else if(n <= 5000){
        printf("%d\n",n / 100);
    }else if(n <= 30000){
        printf("%d\n",n / 1000 + 50);
    }else if(n <= 70000){
        printf("%d\n",(n / 1000 - 30) / 5 + 80);
    }else{
        printf("89\n");
    }

    return 0;
}