#include<bits/stdc++.h>
using namespace std;

int n,sx,sy,ex,ey;

bool ok(int x1,int x2,int y1,int y2){
    return abs(x1 - x2) % abs(y1 + y2) == 0 || abs(y1 + y2) % abs(x1 - x2) == 0;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("D:\\code\\data.in","r",stdin);
    freopen("D:\\code\\data.out","w",stdout);
#endif

    scanf("%d",&n);
    while(n --){
        scanf("%d %d %d %d",&sx,&sy,&ex,&ey);
        if(ok(sx,ex,sy,ey) == 0){
            printf("no\n");
        }else{
            printf("yes\n");
        }
    }

    return 0;
}