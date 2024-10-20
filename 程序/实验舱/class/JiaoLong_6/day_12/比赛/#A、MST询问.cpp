#include<bits/stdc++.h>
using namespace std;

struct edge{
    int ui,vi,idx;
    long long wi;
    bool operator < (const edge &a) const{
        return wi < a.wi;
    }
};

int n,m,q,k,t;
int f[100005];
edge a[100005];
unordered_map<int,int> findedge;

int find(int x){
    if(f[x] == x) return x;
    f[x] = find(f[x]);
    return f[x];
}

void merge(int x,int y){
    int fx = find(x),fy = find(y);
    f[fx] = fy;
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
        scanf("%d %d %lld",&a[i].ui,&a[i].vi,&a[i].wi);
        a[i].idx = i + 1;
    }
    sort(a,a + m);
    for(int i = 0;i < m;i ++){
        if(find(a[i].ui) == find(a[i].vi)) continue;
        findedge[a[i].idx] = 1;
        merge(a[i].ui,a[i].vi);
    }
    scanf("%d",&q);
    while(q --){
        bool ans = 1;
        scanf("%d",&k);
        while(k --){
            scanf("%d",&t);
            if(findedge[t] == 0) ans = 0;
        }
        if(ans) printf("Yes\n");
        else printf("No\n");
    }

    return 0;
}