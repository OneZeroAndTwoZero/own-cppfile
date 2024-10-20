#include<bits/stdc++.h>
using namespace std;

struct node{
    int ui,vi,wi;
    bool operator < (const node &a) const{
        return wi < a.wi;
    }
};

int n,m,ans = 0;
int u,v,w,pos = 0,cnt = 0;
node a[100005];
int f[100005] = {0};

int find(int x){
    if(f[x] == x){
        return x;
    }
    f[x] = find(f[x]);
    return f[x];
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

    scanf("%d %d",&n,&m);
    for(int i = 1;i <= n;i ++){
        f[i] = i;
    }
    for(int i = 0;i < m;i ++){
        scanf("%d %d %d",&u,&v,&w);
        a[pos].ui = u;
        a[pos].vi = v;
        a[pos].wi = w;
        pos ++;
    }
    sort(a,a + pos);
    for(int i = 0;i < m && cnt < n - 1;i ++){
        u = a[i].ui,
        v = a[i].vi;
        w = a[i].wi;
        if(find(u) != find(v)){
            f[find(u)] = v;
            ans += w;
            cnt ++;
        }
    }
    if(cnt == n - 1) printf("%d\n",ans);
    else printf("impossible\n");

	return 0;
}