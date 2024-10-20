#include<bits/stdc++.h>
using namespace std;

int n,m,cnt = 0;
int u,v,w;
int a[205][205];
int p[205][205];
int f[205];

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
        a[u][v] = a[v][u] = min(a[u][v],w);
    }
    for(int k = 1;k <= n;k ++){
        for(int i = 1;i <= n;i ++){
            for(int j = 1;j <= n;j ++){
                if(a[i][j] < a[i][k] + a[k][j]) continue;
                if(a[i][j] == a[i][k] + a[k][j]) p[i][j] = 0;
                else a[i][j] = a[i][k] + a[k][j],p[i][j] = k;
            }
        }
    }
    for(int i = 1;i <= n;i ++){
        for(int j = 1;j <= n;j ++){
            f[p[i][j]] = 1;
        }
    }
    for(int i = 1;i <= n;i ++){
        if(!f[i]) continue;
        printf("%d ",i);
        cnt ++;
    }
    if(!cnt) printf("No important cities.\n");

    return 0;
}