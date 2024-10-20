#include<bits/stdc++.h>
using namespace std;

int n;
bool ans[505][505];

void dfs(int k,int x,int y){
    if(k < 0) return;
    for(int i = x;i - x < k;i ++){
        ans[i][y] = ans[i][y + k - 1] = 1;
    }
    for(int i = y;i - y < k;i ++){
        ans[x][i] = ans[x + k - 1][i] = 1;
    }
    dfs(k - 4,x + 2,y + 2);
}

void out(){
    for(int i = 0;i < n;i ++){
        for(int j = 0;j < n;j ++){
            if(ans[i][j]) printf("*");
            else printf(" ");
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
    dfs(n,0,0);
    out();

    return 0;
}