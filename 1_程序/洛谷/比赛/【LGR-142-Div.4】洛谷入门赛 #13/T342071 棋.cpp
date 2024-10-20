#include<bits/stdc++.h>
using namespace std;

int n,m,cnt1,cnt2;
char a[55][55];

bool ok(int x,int y){
    if(a[x][y] == '~') return 0;
    if(x >= 4)
        if(a[x][y] == a[x - 1][y]
           && a[x - 1][y] == a[x - 2][y]
           && a[x - 2][y] == a[x - 3][y]
           && a[x - 3][y] == a[x - 4][y])
            return 1;
    if(y >= 4)
        if(a[x][y] == a[x][y - 1]
           && a[x][y - 1] == a[x][y - 2]
           && a[x][y - 2] == a[x][y - 3]
           && a[x][y - 3] == a[x][y - 4])
            return 1;
    if(x + 4 < n)
        if(a[x][y] == a[x + 1][y]
           && a[x + 1][y] == a[x + 2][y]
           && a[x + 2][y] == a[x + 3][y]
           && a[x + 3][y] == a[x + 4][y])
            return 1;
    if(y + 4 < m)
        if(a[x][y] == a[x][y + 1]
           && a[x][y + 1] == a[x][y + 2]
           && a[x][y + 2] == a[x][y + 3]
           && a[x][y + 3] == a[x][y + 4])
            return 1;
    if(x + 4 < n && y + 4 < m)
        if(a[x][y] == a[x + 1][y + 1]
           && a[x + 1][y + 1] == a[x + 2][y + 2]
           && a[x + 2][y + 2] == a[x + 3][y + 3]
           && a[x + 3][y + 3] == a[x + 4][y + 4])
            return 1;
    if(x + 4 < n && y >= 4)
        if(a[x][y] == a[x + 1][y - 1]
           && a[x + 1][y - 1] == a[x + 2][y - 2]
           && a[x + 2][y - 2] == a[x + 3][y - 3]
           && a[x + 3][y - 3] == a[x + 4][y - 4])
            return 1;
    if(x >= 4 && y + 4 < m)
        if(a[x][y] == a[x - 1][y + 1]
           && a[x - 1][y + 1] == a[x - 2][y + 2]
           && a[x - 2][y + 2] == a[x - 3][y + 3]
           && a[x - 3][y + 3] == a[x - 4][y + 4])
            return 1;
    if(x >= 4 && y >= 4)
        if(a[x][y] == a[x - 1][y - 1]
           && a[x - 1][y - 1] == a[x - 2][y - 2]
           && a[x - 2][y - 2] == a[x - 3][y - 3]
           && a[x - 3][y - 3] == a[x - 4][y - 4])
            return 1;
    return 0;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("D:\\code\\data.in","r",stdin);
    freopen("D:\\code\\data.out","w",stdout);
#endif

    scanf("%d %d",&n,&m);
    for(int i = 0;i < n;i ++){
        scanf("%s",&a[i]);
        for(int j = 0;j < m;j ++){
            if(a[i][j] == '*') cnt1 ++;
            if(a[i][j] == '$') cnt2 ++;
        }
    }
    for(int i = 0;i < n;i ++){
        for(int j = 0;j < m;j ++){
            if(ok(i,j)){
                if(a[i][j] == '*') printf("Pleasing!\n");
                else printf("zylwins!\n");
                return 0;
            }
        }
    }
    if(cnt1 > cnt2) printf("Z\n");
    else printf("W\n");

    return 0;
}