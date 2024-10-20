#include<bits/stdc++.h>
using namespace std;

int n,m,x,ans = 0x3f3f3f3f;
int c[15],t[15];
int a[15][15];

bool check(){
    for(int i = 0;i < m;i ++){
        if(t[i] < x) return 0;
    }
    return 1;
}

void dfs(int k,int cost){
    if(k == n){
        if(check()) ans = min(ans,cost);
        return;
    }
    for(int i = 0;i < m;i ++){
        t[i] += a[k][i];
    }
    dfs(k + 1,cost + c[k]);
    for(int i = 0;i < m;i ++){
        t[i] -= a[k][i];
    }
    dfs(k + 1,cost);
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %d %d",&n,&m,&x);
    for(int i = 0;i < n;i ++){
        scanf("%d",&c[i]);
        for(int j = 0;j < m;j ++){
            scanf("%d",&a[i][j]);
        }
    }
    dfs(0,0);
    if(ans != 0x3f3f3f3f) printf("%d\n",ans);
    else printf("-1\n");

    return 0;
}