#include<bits/stdc++.h>
using namespace std;

int n,m,ans = 0x1f3f3f3f;
int u,v,w;
int d[105][105],dis[105][105];

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
            d[i][j] = 0x1f3f3f3f;
        }
    }
    while(m --){
        scanf("%d %d %d",&u,&v,&w);
        d[u][v] = d[v][u] = min(d[u][v],w);
    }
    for(int i = 1;i <= n;i ++){
        for(int j = 1;j <= n;j ++){
            dis[i][j] = d[i][j];
        }
    }
    for(int k = 1;k <= n;k ++){
        for(int i = 1;i < k;i ++){
            for(int j = 1;j < k;j ++){
                if(i == j) continue;
                ans = min(ans,dis[i][j] + d[i][k] + d[k][j]);
            }
        }
        for(int i = 1;i <= n;i ++){
            for(int j = 1;j <= n;j ++){
                dis[i][j] = min(dis[i][j],dis[i][k] + dis[k][j]);
            }
        }
    }
    if(ans != 0x1f3f3f3f) printf("%d\n",ans);
    else printf("No solution.\n");

    return 0;
}