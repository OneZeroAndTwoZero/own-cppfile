#include<bits/stdc++.h>
using namespace std;

int n,out = 0;
char a[1005][1005];
bool vis[1005][1005] = {0};
bool ans[1005][1005] = {0};
int dir[4][2] = {{0,1},{0,-1},{1,0},{-1,0}};

void dfs(int x,int y){
    for(int i = 0;i < 4;i ++){
        int tx,ty;
        tx = x + dir[i][0];
        ty = y + dir[i][1];
        if(tx >= 0 && ty >= 0 && tx < n && ty < n){
            if(!vis[tx][ty]){
                if(a[tx][ty] == '#'){
                    ans[tx][ty] = 1;
                    continue;
                }
                vis[tx][ty] = 1;
                dfs(tx,ty);
            }
        }
    }
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

    scanf("%d",&n);
    for(int i = 0;i < n;i ++){
        scanf("%s",&a[i]);
    }
    for(int i = 0;i < n;i ++){
        vis[i][0] = vis[i][n - 1] = vis[0][i] = vis[n - 1][i] = 1;
        dfs(i,0);
        dfs(i,n - 1);
        dfs(0,i);
        dfs(n - 1,i);
    }
    for(int i = 0;i < n;i ++){
        for(int j = 0;j < n;j ++){
            if(a[i][j] != '.' && ans[i][j] == 0){
                out ++;
            }
        }
    }
    printf("%d\n",out);

	return 0;
}