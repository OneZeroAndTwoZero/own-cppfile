#include<bits/stdc++.h>
using namespace std;

int n,m,ans = 0;
int cnt,minx,maxx,miny,maxy;
char a[1005][1005];
bool vis[1005][1005];
int dir[4][2] = {{1,0},{-1,0},{0,1},{0,-1}};

void dfs(int x,int y){
    cnt ++;
    minx = min(minx,x),miny = min(miny,y);
    maxx = max(maxx,x),maxy = max(maxy,y);
    for(int i = 0;i < 4;i ++){
        int tx = x + dir[i][0],ty = y + dir[i][1];
        if(tx < 0 || ty < 0 || tx >= n || ty >= m) continue;
        if(vis[tx][ty] || a[tx][ty] != '#') continue;
        vis[tx][ty] = 1;
        dfs(tx,ty);
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

    scanf("%d %d",&n,&m);
    for(int i = 0;i < n;i ++){
        scanf("%s",a[i]);
    }
    for(int i = 0;i < n;i ++){
        for(int j = 0;j < m;j ++){
            if(vis[i][j] || a[i][j] != '#') continue;
            vis[i][j] = 1;
            cnt = 0,minx = miny = n + m,maxx = maxy = -1;
            dfs(i,j);
            if((maxx - minx + 1) * (maxy - miny + 1) != cnt){
                printf("Bad placement.\n");
                return 0;
            }else{
                ans ++;
            }
        }
    }
    printf("There are %d ships.",ans);

    return 0;
}