#include<bits/stdc++.h>
using namespace std;

int n,k;

int main(){
#ifndef ONLINE_JUDGE
    freopen("D:\\code\\data.in","r",stdin);
    freopen("D:\\code\\data.out","w",stdout);
#endif

    scanf("%d",&n);
    for(int i = n;i >= 1;i --){
        for(int j = 0;j < i;j ++){
            k ++;
            printf("%02d",k);
        }
        printf("\n");
    }

    return 0;
}