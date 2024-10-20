#include<bits/stdc++.h>
using namespace std;

int n,t;

int main(){
#ifndef ONLINE_JUDGE
    freopen("D:\\code\\data.in","r",stdin);
    freopen("D:\\code\\data.out","w",stdout);
#endif

    scanf("%d",&n);
    for(int i = n;i >= 0;i --){
        scanf("%d",&t);
        if(t == 0) continue;
        if(i != n && t > 0) printf("+");
        if(t < 0) printf("-");
        if(i != 0 && abs(t) == 1){
            printf("x");
        }else{
            printf("%d",abs(t));
            if(i != 0) printf("x");
        }
        if(i != 0 && i != 1){
            printf("^%d",i);
        }
    }

    return 0;
}