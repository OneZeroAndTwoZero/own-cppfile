#include<bits/stdc++.h>
using namespace std;

int n,k;

int main(){
#ifndef ONLINE_JUDGE
    freopen("D:\\code\\data.in","r",stdin);
    freopen("D:\\code\\data.out","w",stdout);
#endif

    scanf("%d",&n);
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= n;j ++){
            k ++;
            printf("%02d",k);
        }
        printf("\n");
    }
    k = 0;
    printf("\n");
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= n - i;j ++){
            printf("  ");
        }
        for(int j = 1;j <= i;j ++){
            k ++;
            printf("%02d",k);
        }
        printf("\n");
    }

    return 0;
}