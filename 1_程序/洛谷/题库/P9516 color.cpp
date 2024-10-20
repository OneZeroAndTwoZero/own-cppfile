#include<bits/stdc++.h>
using namespace std;

int sum,t;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    for(int i = 0;i < 5;i ++){
        scanf("%d",&t);
        sum += t;
    }
    if(sum < 100){
        printf("Gray\n");
    }else if(sum < 120){
        printf("Blue\n");
    }else if(sum < 170){
        printf("Green\n");
    }else if(sum < 230){
        printf("Orange\n");
    }else{
        printf("Red\n");
    }

	return 0;
}