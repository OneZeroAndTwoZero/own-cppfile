#include<bits/stdc++.h>
using namespace std;

int k,x,y;
int ans = 0;
int use[105][105];
int dir[4][2][2] = {{{-1,0},{0,-1}},
{{-1,0},{0,1}},{{0,-1},{1,0}},{{0,1},{1,0}}};
int t[3005],xi[3005],yi[3005];

void out(){
    for(int i = 0;i < (k * k - 1) / 3;i ++){
        printf("%d %d %d\n",t[i],xi[i],yi[i]);
    }
}

bool ok_in(int x,int y){
    if(x < 0 || y < 0 || x >= k || y >= k) return 0;
    if(use[x][y]) return 0;
    return 1;
}

bool check(int type,int x,int y){
    if(!ok_in(x,y)) return 0;
    for(int i = 0;i < 2;i ++){
        int tx = x + dir[type][i][0],ty = y + dir[type][i][1];
        if(!ok_in(tx,ty)) return 0;
    }
    return 1;
}

void put_in(int type,int x,int y){
    use[x][y] = 1;
    for(int i = 0;i < 2;i ++){
        int tx = x + dir[type][i][0],ty = y + dir[type][i][1];
        use[tx][ty] = 1;
    }
}

void dfs(int x,int y,int r){
    // cout << x << " ;;; " << y << " " << r << "\n";
    if(x == k - 1 && y == k && r == (k * k - 1) / 3){
        out();
        exit(0);
    }
    if(y == k){
        x ++,y = 0;
    }
    if(use[x][y]){
        dfs(x,y + 1,r);
        return;
    }
    for(int i = 0;i < 4;i ++){
        if(check(i,x,y)){
            put_in(i,x,y);
            t[r] = i + 1,xi[r] = x + 1,yi[r] = y + 1;
            dfs(x,y + 1,r + 1);
        }
    }
    dfs(x,y + 1,r);
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d %d %d",&k,&x,&y);
    -- x,-- y;
    k = pow(2,k);
    cout << k << "\n";
    use[x][y] = 1;
    dfs(0,0,0);

	return 0;
}