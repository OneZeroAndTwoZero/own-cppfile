#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

int n,ans = 0;
int a[15][15],b[15][15];
int c[15][15];
int data[15][15],cur[15][15];

bool cmp(){
    for(int i = 0;i < n;i ++){
        for(int j = 0;j < n;j ++){
            if(data[i][j] != cur[i][j]){
                return 0;
            }
        }
    }
    return 1;
}

bool check(){
    memset(data,0,sizeof(data));
    memset(cur,0,sizeof(cur));
    for(int i = 0;i < n;i ++){
        for(int j = 0;j < n;j ++){
            for(int k = 0;k < n;k ++){
                data[i][j] += a[i][k] * c[k][j];
                data[i][j] %= 2;
            }
        }
    }
    for(int i = 0;i < n;i ++){
        for(int j = 0;j < n;j ++){
            cur[i][j] = b[i][j] * c[i][j];
        }
    }
    return cmp();
}

void dfs(int x,int y){
    if(x == n){
        if(check()) ans ++;
        return;
    }
    if(y == n){
        dfs(x + 1,0);
        return;
    }
    c[x][y] = 1;
    dfs(x,y + 1);
    c[x][y] = 0;
    dfs(x,y + 1);
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
    for(int i = 0;i < n;i ++){
        for(int j = 0;j < n;j ++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i = 0;i < n;i ++){
        for(int j = 0;j < n;j ++){
            scanf("%d",&b[i][j]);
        }
    }
    dfs(0,0);
    printf("%d\n",ans);

    return 0;
}