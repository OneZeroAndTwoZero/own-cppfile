#include<bits/stdc++.h>
using namespace std;

int n,m,pos;
long long k,ans = 0;
long long a[25][25];
unordered_map<long long,int> f[25][25];

void dfs_left(int x,int y,long long sum){
    if(x >= n || y >= m) return;
    if(x + y == pos){
        f[x][y][sum + a[x][y]] ++;
        return;
    }
    dfs_left(x + 1,y,sum + a[x][y]);
    dfs_left(x,y + 1,sum + a[x][y]);
}

void dfs_right(int x,int y,long long sum){
    if(x < 0 || y < 0) return;
    if(x + y == pos){
        ans += f[x][y][k - sum];
        return;
    }
    dfs_right(x - 1,y,sum + a[x][y]);
    dfs_right(x,y - 1,sum + a[x][y]);
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d %d %lld",&n,&m,&k);
    pos = (n + m - 2) / 2;
    for(int i = 0;i < n;i ++){
        for(int j = 0;j < m;j ++){
            scanf("%lld",&a[i][j]);
        }
    }
    dfs_left(0,0,0LL);
    dfs_right(n - 1,m - 1,0LL);
    printf("%lld\n",ans);

	return 0;
}