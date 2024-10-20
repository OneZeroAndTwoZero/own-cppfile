#include<bits/stdc++.h>
using namespace std;

int n,x;
int ans[15] = {0};

void cz(int a){
    while(a){
        ans[a % 10] ++;
        a /= 10;
    }
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("D:\\code\\data.in","r",stdin);
    freopen("D:\\code\\data.out","w",stdout);
#endif

    scanf("%d %d",&n,&x);
    for(int i = 1;i <= n;i ++){
        cz(i);
    }
    printf("%d\n",ans[x]);

    return 0;
}