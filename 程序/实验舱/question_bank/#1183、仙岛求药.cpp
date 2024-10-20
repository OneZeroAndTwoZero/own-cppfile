#include<bits/stdc++.h>
using namespace std;

int n,m;
int sx,sy,ex,ey;
int dir[4][2] = {{1,0},{-1,0},{0,1},{0,-1}};
char a[25][25];
int ans[25][25];

void bfs(){
    queue<int> qx,qy;
    qx.push(sx),qy.push(sy);
    ans[sx][sy] = 0;
    while(qx.size()){
        int x = qx.front(),y = qy.front();
        qx.pop(),qy.pop();
        for(int i = 0;i < 4;i ++){
            int tx = x + dir[i][0],ty = y + dir[i][1];
            if(tx < 0 || ty < 0 || tx >= n || ty >= m) continue;
            if(a[tx][ty] == '#') continue;
            if(ans[tx][ty] != 0x3f3f3f3f) continue;
            ans[tx][ty] = ans[x][y] + 1;
            qx.push(tx),qy.push(ty);
        }
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

    while(1){
        scanf("%d %d",&n,&m);
        if(n == 0 && m == 0) break;
        for(int i = 0;i < n;i ++){
            scanf("%s",a[i]);
            for(int j = 0;j < m;j ++){
                ans[i][j] = 0x3f3f3f3f;
                if(a[i][j] == '@'){
                    sx = i,sy = j;
                }else if(a[i][j] == '*'){
                    ex = i,ey = j;
                }
            }
        }
        bfs();
        if(ans[ex][ey] != 0x3f3f3f3f) printf("%d\n",ans[ex][ey]);
        else printf("-1\n");
    }

    return 0;
}