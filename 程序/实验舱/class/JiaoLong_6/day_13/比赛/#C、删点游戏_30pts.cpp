#include<bits/stdc++.h>
using namespace std;

int n;
int dp[505][505];
int a[505][505];
int v[505];
int f[505];

void floyd(){
    for(int k = 1;k <= n;k ++){
        for(int i = 1;i <= n;i ++){
            for(int j = 1;j <= n;j ++){
                a[i][j] = min(a[i][j],a[i][k] + a[k][j]);
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

    scanf("%d",&n);
    for(int i = 1;i <= n;i ++){
        for(int j = 1;j <= n;j ++){
            scanf("%d",&dp[i][j]);
        }
    }
    for(int i = 0;i < n;i ++){
        for(int x = 1;x <= n;x ++){
            for(int y = 1;y <= n;y ++){
                a[x][y] = dp[x][y];
                // cout << x << " " << y << " " << f[x] << " " << f[y] << ";;\n";
                if(f[x] != 0 || f[y] != 0){
                    a[x][y] = 0x3f3f3f3f;
                }
            }
        }
        floyd();
        int cnt = 0;
        for(int x = 1;x <= n;x ++){
            for(int y = 1;y <= n;y ++){
                // printf("%d ",a[x][y]);
                if(f[x] != 0 || f[y] != 0){
                    continue;
                }
                cnt += a[x][y];
            }
            // printf("\n");
        }
        printf("%d ",cnt);
        scanf("%d",&v[i]);
        f[v[i]] += 1;
        // for(int i = 0;i <)
    }
    printf("\n");

    return 0;
}