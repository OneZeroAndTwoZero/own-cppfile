#include<bits/stdc++.h>
using namespace std;

int n,m,cnt = 0;
int u,v,w;
int a[205][205];
int check[205][205];
int dp[205][205];
vector<int> ans;

void floyd(){
    for(int k = 1;k <= n;k ++){
        for(int i = 1;i <= n;i ++){
            for(int j = 1;j <= n;j ++){
                dp[i][j] = min(dp[i][j],dp[i][k] + dp[k][j]);
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

    scanf("%d %d",&n,&m);
    for(int i = 1;i <= n;i ++){
        for(int j = 1;j <= n;j ++){
            a[i][j] = 0x3f3f3f3f;
        }
    }
    while(m --){
        scanf("%d %d %d",&u,&v,&w);
        a[u][v] = min(a[u][v],w);
        a[v][u] = min(a[v][u],w);
    }
    for(int i = 1;i <= n;i ++){
        for(int j = 1;j <= n;j ++){
            check[i][j] = a[i][j];
        }
    }
    for(int k = 1;k <= n;k ++){
        for(int i = 1;i <= n;i ++){
            for(int j = 1;j <= n;j ++){
                check[i][j] = min(check[i][j],check[i][k] + check[k][j]);
            }
        }
    }
    for(int i = 1;i <= n;i ++){
        for(int x = 1;x <= n;x ++){
            for(int y = 1;y <= n;y ++){
                dp[x][y] = a[x][y];
                if(x == i || y == i) dp[x][y] = 0x3f3f3f3f;
            }
        }
        floyd();
        bool p = 0;
        for(int x = 1;x <= n;x ++){
            for(int y = 1;y <= n;y ++){
                if(x == i || y == i) continue;
                if(dp[x][y] > check[x][y]){
                    p = 1;
                    break;
                }
            }
            if(p) break;
        }
        if(p){
            cnt ++;
            ans.push_back(i);
        }
    }
    if(cnt == 0){
        printf("No important cities.\n");
        return 0;
    }
    for(int i = 0;i < cnt;i ++){
        printf("%d%c",ans[i]," \n"[i == cnt - 1]);
    }

    return 0;
}