#include<bits/stdc++.h>
using namespace std;

int n;
char a[1005][1005];

void putin(int i,int j){
    a[i][j + 1] = '/';
    a[i][j + 2] = '\\';
    a[i + 1][j] = '/';
    a[i + 1][j + 1] = '_';
    a[i + 1][j + 2] = '_';
    a[i + 1][j + 3] = '\\';
}

void dfs(int n,int x,int y){
    if(n == 1){
        putin(x,y);
        return;
    }
    dfs(n - 1,x,y + (1 << (n - 1)));
    dfs(n - 1,x + (1 << (n - 1)),y);
    dfs(n - 1,x + (1 << (n - 1)),y + 2 * (1 << (n - 1)));
}

void putout(){
    for(int i = 0;i < (1 << n);i++){
        for(int j = 0;j < (1 << (n + 1)) - ((1 << n) - i - 1);j++){
            printf("%c",a[i][j]);
        }
        printf("\n");
    }
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    
    scanf("%d",&n);
    for(int i = 0;i <= (1 << (n + 1));i ++){
        for(int j = 0;j <= (1 << (n + 1));j ++){
            a[i][j] = ' ';
        }
    }
    dfs(n,0,0);
    putout();

    return 0;
}