#include<bits/stdc++.h>
using namespace std;

int x;

int main(){
#ifndef ONLINE_JUDGE
    freopen("D:\\code\\data.in","r",stdin);
    freopen("D:\\code\\data.out","w",stdout);
#endif

    scanf("%d",&x);
    printf("%d\n",x / 10 + x % 10);

    return 0;
}