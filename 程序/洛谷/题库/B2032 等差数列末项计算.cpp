#include<bits/stdc++.h>
using namespace std;

int a1,a2,n;

int main(){
    scanf("%d %d %d",&a1,&a2,&n);
    printf("%d\n",a1 + (n - 1) * (a2 - a1));

    return 0;
}