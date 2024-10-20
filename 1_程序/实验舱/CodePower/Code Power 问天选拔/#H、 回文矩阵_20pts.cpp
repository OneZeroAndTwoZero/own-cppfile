#include<bits/stdc++.h>
#define __len(x) (((1LL << (int)(3.3 * x + 1)) + 15))
using namespace std;

int n,m,r,c;
char a[2 * __len(3)][2 * __len(3)];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %d %d %d",&n,&m,&r,&c);
    if(n == 2 && m == 2){
        if(r == 0 && c == 0){
            printf("ab\ncd\n");
        }else if(r == 0 && c == 1){
            printf("ac\nad\n");
        }else if(r == 0 && c == 2){
            printf("ab\nab\n");
        }else if(r == 1 && c == 0){
            printf("aa\nbd\n");
        }else if(r == 1 && c == 1){
            printf("aa\nac\n");
        }else if(r == 1 && c == 2){
            printf("IMPOSSIBLE\n");
        }else if(r == 2 && c == 0){
            printf("aa\nbb\n");
        }else if(r == 2 && c == 1){
            printf("IMPOSSIBLE\n");
        }else{
            printf("aa\naa\n");
        }
        return 0;
    }else if(n == 2){
        if(r == 2 && c != m && c > (m / 2)){
            printf("IMPOSSIBLE\n");
        }else if(r == 0){
            for(int i = 1;i <= m;i ++){
                if(i <= c) a[1][i] = 'a';
                else a[1][i] = (rand() % 24) + 'b';
            }
            for(int i = 1;i <= m;i ++){
                if(i <= c) a[2][i] = 'a';
                else a[2][i] = a[1][i] + 1;
            }
            for(int i = 1;i <= 2;i ++){
                for(int j = 1;j <= m;j ++){
                    printf("%c",a[i][j]);
                }
                printf("\n");
            }
        }else if(r == 1){
            for(int i = 1;i <= 2;i ++){
                for(int j = 1;j <= m;j ++){
                    if(i <= r || j <= c) printf("a");
                    else printf("%c",rand() % 24 + 'b');
                }
                printf("\n");
            }
        }
        return 0;
    }
    if(r == n && c != m || r != n && c == m){
        printf("IMPOSSIBLE\n");
        return 0;
    }
    for(int i = 1;i <= n;i ++){
        for(int j = 1;j <= m;j ++){
            if(i <= r || j <= c) a[i][j] = 'a';
            else a[i][j] = (rand() % 25) + 'b';
            printf("%c",a[i][j]);
        }
        printf("\n");
    }

    return 0;
}