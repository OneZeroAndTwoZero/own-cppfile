#include<bits/stdc++.h>
using namespace std;

int n,ans = 0;
char a[1005][1005];
int dir[4][2] = {{0,1},{0,-1},{1,0},{-1,0}};

bool check(int x,int y){
    bool res = 0;
    for(int i = 0;i < 4;i ++){
        int tx,ty;
        tx = x + dir[i][0];
        ty = y + dir[i][1];
        res |= a[tx][ty] == '.';
    }
    return res;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

    scanf("%d",&n);
    for(int i = 0;i < n;i ++){
        scanf("%s",&a[i]);
        for(int j = 0;j < n;j ++){
            if(a[i][j] == '#') ans ++;
        }
    }
    for(int i = 1;i < n - 1;i ++){
        for(int j = 1;j < n - 1;j ++){
            if(a[i][j] == '.') continue;
            ans -= check(i,j);
        }
    }
    printf("%d\n",ans);

	return 0;
}