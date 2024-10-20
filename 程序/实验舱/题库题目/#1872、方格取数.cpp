#include<bits/stdc++.h>
using namespace std;

int n,m,s,out = 0;
int a[2005][2005];
int ans[2005][2005];
int dir[4][2] = {{1,0},{-1,0},{0,1},{0,-1}};

int dfs(int x,int y){
    if(ans[x][y]) return ans[x][y];
    for(int i = 0;i < 4;i ++){
        int tx = x + dir[i][0],ty = y + dir[i][1];
        if(tx < 0 || ty < 0 || tx >= n || ty >= m) continue;
        if(a[tx][ty] <= a[x][y]) continue;
        ans[x][y] = max(ans[x][y],dfs(tx,ty));
    }
    ans[x][y] += a[x][y];
    return ans[x][y];
}

void make(){
    for (int i = 0;i < n;i ++)
        for (int j = 0;j < m;j ++){
            s = (s * 345) % 19997;
            a[i][j] = s + 1;
        }
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d %d %d",&n,&m,&s);
    make();
    for(int i = 0;i < n;i ++)
        for(int j = 0;j < m;j ++)
            out = max(out,dfs(i,j));
    printf("%d\n",out);

	return 0;
}