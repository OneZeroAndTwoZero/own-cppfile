#include<bits/stdc++.h>
using namespace std;

int n;
int a[1005] = {0};

int main(){
#ifndef ONLINE_JUDGE
    freopen("D:\\code\\data.in","r",stdin);
    freopen("D:\\code\\data.out","w",stdout);
#endif

    scanf("%d",&n);
    for(int i = 1;i <= n;i ++){
        for(int j = i;j > 0;j --){
            if(j != 1 && j != i) a[j] = a[j] + a[j - 1];
            else a[j] = 1;
        }
        for(int j = 1;j <= i;j ++){
            printf("%d ",a[j]);
        }
        printf("\n");
    }

    return 0;
}