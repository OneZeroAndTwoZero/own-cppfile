#include<bits/stdc++.h>
#define __len(x) (((1LL << (int)(3.3 * x + 1)) + 15))
using namespace std;

int x,y,z,n;
int posx,posy,posz;
char a[5][515][515]; // 0 main 1 left 2 down

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %d %d %d",&x,&y,&z,&n);
    for(int k = 0;k <= 3;k ++){
        for(int i = 0;i <= 500;i ++){
            for(int j = 0;j <= 500;j ++){
                a[k][i][j] = '.';
            }
        }
    }
    while(n --){
        scanf("%d %d %d",&posx,&posy,&posz);
        a[0][y - posy + 1][posx] = 'x';
        a[1][y - posy + 1][posz] = 'x';
        a[2][posz][posx] = 'x';
    }
    for(int i = 1;i <= y;i ++){
        for(int j = 1;j <= x;j ++){
            printf("%c",a[0][i][j]);
        }
        printf(" ");
        for(int j = 1;j <= z;j ++){
            printf("%c",a[1][i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(int i = 1;i <= z;i ++){
        for(int j = 1;j <= x;j ++){
            printf("%c",a[2][i][j]);
        }
        printf("\n");
    }

    return 0;
}