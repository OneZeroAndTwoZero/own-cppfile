#include<bits/stdc++.h>
using namespace std;

bool ok = 0;
int n,m,t;
int a[100005] = {0};

int main(){
#ifndef ONLINE_JUDGE
    freopen("D:\\code\\data.in","r",stdin);
    freopen("D:\\code\\data.out","w",stdout);
#endif

    scanf("%d %d",&n,&m);
    for(int i = 0;i < n;i ++){
        scanf("%d",&t);
        a[t] ++;
    }
    for(int i = 0;i <= 100000;i ++){
        if(n - a[i] < a[i]){
            printf("%d\n",i);
            ok = 1;
        }
    }
    if(!ok){
        printf("?\n");
    }

    return 0;
}