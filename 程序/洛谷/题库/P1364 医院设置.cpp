#include<bits/stdc++.h>
using namespace std;

struct node{
    int l,r;
    int f;
    int wi;
};

long long ans = 0;
int n,sum;
int w,u,v,s = 1;
int size[1005];
node a[1005];
bool vis[1005] = {0};

int cz(int x){
    if(size[x] != 0) return size[x];
    if(x == 0) return 0;
    int res = a[x].wi;
    res += cz(a[x].l);
    res += cz(a[x].r);
    size[x] = res;
    return res;
}

void dfs(int x,int d){
    if(x == 0) return;
    ans += d * a[x].wi;
    if(!vis[a[x].f]){
        vis[a[x].f] = 1;
        dfs(a[x].f,d + 1);
    }
    if(!vis[a[x].l]){
        vis[a[x].l] = 1;
        dfs(a[x].l,d + 1);
    }
    if(!vis[a[x].r]){
        vis[a[x].r] = 1;
        dfs(a[x].r,d + 1);
    }
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

    scanf("%d",&n);
    for(int i = 0;i < n;i ++){
        scanf("%d %d %d",&w,&u,&v);
        sum += w;
        a[i + 1].l = u,a[i + 1].r = v;
        a[i + 1].wi = w;
        a[u].f = a[v].f = i + 1;
    }
    for(int i = 0;i < n;i ++){
        size[i + 1] = cz(i + 1);
    }
    while(1){
        int s1 = size[a[s].l];
        int s2 = size[a[s].r];
        int s3 = sum - a[s].wi - s1 - s2;
        if(s1 > sum / 2) s = a[s].l;
        else if(s2 > sum / 2) s = a[s].r;
        else if(s3 > sum / 2) s = a[s].f;
        else break;
    }
    vis[s] = 1;
    dfs(s,0);
    printf("%lld\n",ans);
    
	return 0;
}