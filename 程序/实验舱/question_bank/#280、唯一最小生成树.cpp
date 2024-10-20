#include<bits/stdc++.h>
using namespace std;

struct node{
    int ui,vi,wi;
    bool operator < (const node &a) const{
        return wi < a.wi;
    }
};

int n,m,pos;
int f[500005];
node edge[1000005];
long long ans = 0;

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
    for(int i = 0;i < m;i = pos){
        int cnt = 0,cur = 0;
        while(pos < m && edge[pos].wi == edge[i].wi){
            if(find(edge[pos].ui) != find(edge[pos].vi)) cnt ++;
            pos ++;
        }
        for(int j = i;j < pos;j ++){
            if(find(edge[j].ui) == find(edge[j].vi)) continue;
            merge(edge[j].ui,edge[j].vi);
            ans += edge[j].wi;
            cur ++;
        }
        if(cnt != cur){
            printf("Not Unique!\n");
            return 0;
        }
    }
    printf("%lld\n",ans);

    return 0;
}