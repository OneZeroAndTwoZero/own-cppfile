#include<bits/stdc++.h>
using namespace std;

int x;

int main(){
    scanf("%d",&x);
    x %= 2023;
    while(x < 0) x += 2023;
    printf("%d\n",x);

    return 0;
}