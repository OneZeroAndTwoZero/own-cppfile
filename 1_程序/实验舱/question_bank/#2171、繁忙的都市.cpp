#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

struct node{
    int ui,vi,wi;
    bool operator < (const node &a) const{
        return wi < a.wi;
    }
};

int n,m;
int f[500005];
node edge[1000006];
int ans = 0;

int find(int x){
    if(f[x] == x) return x;
    f[x] = find(f[x]);
    return f[x];
}

void merge(int x,int y){
    int fx = find(x),fy = find(y);
    f[fx] = f[fy] = fx;
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
        f[i] = i;
    }
    for(int i = 0;i < m;i ++){
        scanf("%d %d %d",&edge[i].ui,&edge[i].vi,&edge[i].wi);
    }
    sort(edge,edge + m);
    for(int i = 0;i < m;i ++){
        if(find(edge[i].ui) == find(edge[i].vi)) continue;
        merge(edge[i].ui,edge[i].vi);
        ans = max(ans,edge[i].wi);
    }
    printf("%d %d\n",n - 1,ans);

    return 0;
}