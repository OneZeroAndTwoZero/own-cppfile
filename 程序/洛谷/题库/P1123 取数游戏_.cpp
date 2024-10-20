#include<bits/stdc++.h>
using namespace std;

int t,n,m,ans = 0;
int a[15][15];
int vis[15][15];
int dir[8][2] = {{1,1},{1,0},{1,-1},{0,-1},{0,1},{-1,1},{-1,0},{-1,-1}};

// 初始化
void __init(){
    ans = 0;
    for(int i = 0;i <= n;i ++){
        for(int j = 0;j <= m;j ++){
            vis[i][j] = a[i][j] = 0;
        }
    }
}

// 标记/取消标记(靠cur实现)
void operate(int x,int y,int cur){
    for(int i = 0;i < 8;i ++){
        int tx = x + dir[i][0],ty = y + dir[i][1];
        vis[tx][ty] += cur;
    }
}

void dfs(int x,int y,int sum){
    if(x == n && y == m + 1){
        ans = max(ans,sum);
        return;
    }
    // 转行
    if(y == m + 1) ++ x,y = 0;
    // 如果已经不能放置,则不再考虑
    if(vis[x][y]){
        dfs(x,y + 1,sum);
        return;
    }
    operate(x,y,1);
    dfs(x,y + 1,sum + a[x][y]);
    operate(x,y,-1);
    dfs(x,y + 1,sum);
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d",&t);
    while(t --){
        scanf("%d %d",&n,&m);
        __init();
        // 在修改时防止越界,故从1开始
        for(int i = 1;i <= n;i ++){
            for(int j = 1;j <= m;j ++){
                scanf("%d",&a[i][j]);
            }
        }
        dfs(1,1,0);
        printf("%d\n",ans);
    }

	return 0;
}