#include<bits/stdc++.h>
using namespace std;

int n,m,x,y,ans = 0;
int a[200005];
vector<int> e[200005];
int fa[200005];

void erg(int u,int num){
    num += a[u];
    int cnt = 0;
    for(auto && i : e[u]){
        if(i == fa[u]) continue;
        cnt ++;
        fa[i] = u;
        erg(i,num);
    }
    if(cnt || num > m) return;
    ans ++;
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
        scanf("%d",&a[i]);
    }
    for(int i = 1;i < n;i ++){
        scanf("%d %d",&x,&y);
        e[x].push_back(y);
        e[y].push_back(x);
    }
    erg(1,0);
    printf("%d\n",ans);

    return 0;
}