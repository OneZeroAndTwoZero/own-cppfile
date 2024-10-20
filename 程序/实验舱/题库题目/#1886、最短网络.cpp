#include<bits/stdc++.h>
using namespace std;

struct node{
    int ui,vi,wi;
    bool operator < (const node &a) const{
        return wi < a.wi;
    }
};

int n,t,pos = 0;
long long ans = 0;
int u,v,w;
int f[205];
node a[500005];

void __init(){
    for(int i = 1;i <= n;i ++)
        f[i] = i;
}

int find(int x){
    if(x == f[x]) return x;
    f[x] = find(f[x]);
    return f[x];
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d",&n);
    __init();
    for(int i = 0;i < n;i ++)
        for(int j = 0;j < n;j ++){
            scanf("%d",&t);
            if(i > j) a[pos ++] = {i,j,t};
        }
    sort(a,a + pos);
    for(int i = 0;i < pos;i ++){
        if(find(a[i].ui) != find(a[i].vi)){
            f[find(a[i].ui)] = f[find(a[i].vi)] = find(a[i].ui);
            ans += a[i].wi;
        }
    }
    printf("%lld\n",ans);

	return 0;
}