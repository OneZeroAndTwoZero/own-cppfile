#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

string t;
int r,n,c;
long long ans = 0;
char a[105][105] = {0};
int dir[8][2] = {{-1,0},{-1,1},{0,1},{1,1},{1,0},{1,-1}
                ,{0,-1},{-1,-1}};
int now[1005] = {0};

void dfs(int x,int y,int k,int num){
    if(a[x][y] != t[k]) return;
    if(k == n - 1){
        ans  ++;
        return;
    }
    int c1,c2,c3;
    if(k == 0){
        for(int i = 0;i < 8;i ++){
            int tx = x + dir[i][0],ty = y + dir[i][1];
            if(tx >= 0 && tx < r && ty >= 0 
                && ty < c && a[tx][ty] == t[k + 1]){
                now[k] = i;
                dfs(tx,ty,k + 1,0);
            }
        }
    }else{
        c3 = (now[k - 1] + 2) % 8;
        c2 = (now[k - 1] + 6) % 8;
        c1 = now[k - 1];
        int tx = x + dir[c1][0],ty = y + dir[c1][1];
        if(tx >= 0 && tx < r && ty >= 0 && ty < c && a[tx][ty] == t[k + 1]){
            now[k] = c1;
            dfs(tx,ty,k + 1,num);
        }
        if(num == 0){
            tx = x + dir[c2][0],ty = y + dir[c2][1];
            if(tx >= 0 && tx < r && ty >= 0 && ty < c && a[tx][ty] == t[k + 1]){
                now[k] = c2;
                dfs(tx,ty,k + 1,num + 1);
            }
            tx = x + dir[c3][0],ty = y + dir[c3][1];
            if(tx >= 0 && tx < r && ty >= 0 && ty < c && a[tx][ty] == t[k + 1]){
                now[k] = c3;
                dfs(tx,ty,k + 1,num + 1);
            }
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
    
    cin >> t;
    cin >> r >> c;
    n = t.size();
    for(int i = 0;i < r;i ++){
        for(int j = 0;j < c;j ++){
            cin >> a[i][j];
        }
    }
    for(int i = 0;i < r;i ++){
        for(int j = 0;j < c;j ++){
            dfs(i,j,0,0);
        }
    }
    cout << ans << "\n";

    return 0;
}

