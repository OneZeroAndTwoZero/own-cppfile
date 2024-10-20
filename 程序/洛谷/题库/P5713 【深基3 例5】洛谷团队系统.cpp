#include<bits/stdc++.h>
using namespace std;

int n,num1,num2;

int main(){
#ifndef ONLINE_JUDGE
    freopen("D:\\code\\data.in","r",stdin);
    freopen("D:\\code\\data.out","w",stdout);
#endif

    scanf("%d",&n);
    num1 = 5 * n;
    num2 = n * 3 + 11;
    if(num1 > num2){
        printf("Luogu\n");
    }else{
        printf("Local\n");
    }

    return 0;
}