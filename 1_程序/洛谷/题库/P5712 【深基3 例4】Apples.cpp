#include<bits/stdc++.h>
using namespace std;

int x;

int main(){
#ifndef ONLINE_JUDGE
    freopen("D:\\code\\data.in","r",stdin);
    freopen("D:\\code\\data.out","w",stdout);
#endif

    scanf("%d",&x);
    if(x <= 1){
        printf("Today, I ate %d apple.",x);
    }else{
        printf("Today, I ate %d apples.",x);
    }

    return 0;
}