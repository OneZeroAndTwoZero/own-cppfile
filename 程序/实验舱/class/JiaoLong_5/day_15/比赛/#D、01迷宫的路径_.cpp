#include<bits/stdc++.h>
using namespace std;

int n,m,p,q,mod = 1000000007;
int a[1005][1005] = {0};
int ans = 0;

void dfs(int x,int y,int num0,int num1){
    //cout << x << " " << y << " " << num0 << " " << num1 << endl;
    if(x > n || y > m) return;
    if(x == n && y == m){
        if(num0 >= q && num1 >= q) ans ++;
        return;
    }
    if(x + 1 <= n) dfs(x + 1,y,num0 + (a[x + 1][y] == 0),num1 + (a[x + 1][y] == 1));
    if(y + 1 <= m) dfs(x,y + 1,num0 + (a[x][y + 1] == 0),num1 + (a[x][y + 1] == 1));
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("D:\\code\\data.in","r",stdin);
    freopen("D:\\code\\data.out","w",stdout);
#endif

    scanf("%d %d %d %d",&n,&m,&p,&q);
    for(int i = 1;i <= n;i ++){
        for(int j = 1;j <= m;j ++){
            scanf("%d",&a[i][j]);
        }
    }
    dfs(1,1,a[1][1] == 0,a[1][1] == 1);
    printf("%d\n",ans);

    return 0;
}