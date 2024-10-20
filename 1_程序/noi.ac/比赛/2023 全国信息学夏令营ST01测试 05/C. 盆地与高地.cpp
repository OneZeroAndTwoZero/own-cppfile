#include<bits/stdc++.h>
using namespace std;

int dir[8][2] = {{1,0},{-1,0},{0,1},{0,-1},{1,1},{-1,1},{1,-1},{-1,-1}};
int n;
int a[1005][1005] = {0};
bool vis[1005][1005] = {0};
int cnt_higher = 0,cnt_lower = 0;
int ans_low = 0,ans_high = 0;

void dfs(int x,int y){
    for(int i = 0;i < 8;i ++){
        int tx,ty;
        tx = x + dir[i][0];
        ty = y + dir[i][1];
        if(tx >= 0 && ty >= 0 && tx < n && ty < n){
            if(a[tx][ty] == a[x][y]){
                if(!vis[tx][ty]){
                    vis[tx][ty] = 1;
                    dfs(tx,ty);
                }
            }else if(a[tx][ty] > a[x][y]){
                cnt_higher ++;
            }else if(a[x][y] > a[tx][ty]){
                cnt_lower ++;
            }
        }
    }
}

int main(){
// #ifndef ONLINE_JUDGE
//     freopen("data.in","r",stdin);
//     freopen("data.out","w",stdout);
// #endif

    scanf("%d",&n);
    for(int i = 0;i < n;i ++){
        for(int j = 0;j < n;j ++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i = 0;i < n;i ++){
        for(int j = 0;j < n;j ++){
            if(!vis[i][j]){
                vis[i][j] = 1;
                cnt_higher = 0,cnt_lower = 0;
                dfs(i,j);
                if(cnt_lower == 0){
                    ans_low ++;
                }
                if(cnt_higher == 0){
                    ans_high ++;
                }
            }
        }
    }
    printf("%d %d\n",ans_high,ans_low);

	return 0;
}
