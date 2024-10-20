#include<bits/stdc++.h>
using namespace std;

int n,m,x,y;
int a[105][105] = {0};

int main(){
#ifndef ONLINE_JUDGE
    freopen("D:\\code\\data.in","r",stdin);
    freopen("D:\\code\\data.out","w",stdout);
#endif

    scanf("%d %d %d %d",&n,&m,&x,&y);
    while(x --){
        int x1,x2,y1,y2;
        scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
        a[x1][y1] += 1;
        a[x1][y2 + 1] -= 1;
        a[x2 + 1][y1] -= 1;
        a[x2 + 1][y2 + 1] += 1;
    }
    for(int i = 1;i <= n;i ++){
        for(int j = 1;j <= m;j ++){
            a[i][j] = a[i][j] + a[i - 1][j] + a[i][j - 1] - a[i - 1][j - 1];
        }
    }
    while(y --){
        int x,y;
        scanf("%d %d",&x,&y);

    }


    return 0;
}