#include<bits/stdc++.h>
using namespace std;

int n;
bool ans[1105][1105] = {0};

void dfs(int x,int y,int k){
    //cout << x << " " << y << " " << k << endl;
    if(k == 1){
        ans[x][y] = 1;
        return;
    }
    dfs(x + k / 2,y + k / 2,k / 2);
    dfs(x,y + k / 2,k / 2);
    dfs(x + k / 2,y,k / 2);
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("D:\\code\\data.in","r",stdin);
    freopen("D:\\code\\data.out","w",stdout);
#endif

    scanf("%d",&n);
    dfs(0,0,pow(2,n));
    for(int i = 0;i < pow(2,n);i ++){
        for(int j = 0;j < pow(2,n);j ++){
            printf("%d ",ans[i][j]);
        }
        printf("\n");
    }

    return 0;
}