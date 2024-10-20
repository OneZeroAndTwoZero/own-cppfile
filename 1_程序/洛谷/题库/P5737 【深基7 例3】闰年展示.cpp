#include<bits/stdc++.h>
using namespace std;

int x,y,ans = 0;

bool ok(int a){
    if(a % 400 == 0) return 1;
    if(a % 100 == 0) return 0;
    if(a % 4 == 0) return 1;
    return 0;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("D:\\code\\data.in","r",stdin);
    freopen("D:\\code\\data.out","w",stdout);
#endif

    scanf("%d %d",&x,&y);
    for(int i = x;i <= y;i ++){
        if(ok(i)) ans ++;
    }
    printf("%d\n",ans);
    for(int i = x;i <= y;i ++){
        if(ok(i)) printf("%d ",i);
    }

    return 0;
}