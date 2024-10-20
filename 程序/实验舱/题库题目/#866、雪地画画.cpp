#include<bits/stdc++.h>
using namespace std;

int n,m,ans = 0;
char c[1000005];
vector<int> a[1000005],vis[1000005];
int dir[4][2] = {{0,1},{0,-1},{1,0},{-1,0}};


void dfs(int x,int y){
    for(int i = 0;i < 4;i ++){
        int tx = x + dir[i][0],ty = y + dir[i][1];
        if(tx >= 0 && ty >= 0 && tx < n && ty < m && !vis[tx][ty] && a[tx][ty]){
            vis[tx][ty] = 1;
            dfs(tx,ty);
        }
    }
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

    scanf("%d %d",&n,&m);
    for(int i = 0;i < n;i ++){
        scanf("%s",&c);
        for(int j = 0;j < m;j ++){
            a[i].push_back(c[j] - '0');
            vis[i].push_back(0);
        }
    }
    for(int i = 0;i < n;i ++){
        for(int j = 0;j < m;j ++){
            if(!vis[i][j] && a[i][j]){
                vis[i][j] = 1;
                ans ++;
                dfs(i,j);
            }
        }
    }
    printf("%d\n",ans);

	return 0;
}
