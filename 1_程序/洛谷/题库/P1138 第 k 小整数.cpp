#include<bits/stdc++.h>
using namespace std;

int n,k,t;
int a[30005] = {0};

int main(){
#ifndef ONLINE_JUDGE
    freopen("D:\\code\\data.in","r",stdin);
    freopen("D:\\code\\data.out","w",stdout);
#endif


    scanf("%d %d",&n,&k);
    for(int i = 0;i < n;i ++){
        scanf("%d",&t);
        a[t] ++;
    }
    for(int i = 0;i <= 30000;i ++){
        if(a[i]){
            k --;
            if(!k){
                printf("%d\n",i);
                break;
            }
        }
    }
    if(k){
        printf("NO RESULT\n");
    }

    return 0;
}