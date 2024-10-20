#include<bits/stdc++.h>
using namespace std;

struct node{
    int vi;
    long long wi;
};

int n,m,s;
int u,v;
long long w;
vector<node> a[10005];
long long dis[10005],ans[10005];
int cnt[10005];
bool vis[10005],is_visit[10005];

bool spfa(int st){
    queue<int> q;
    q.push(st);
    vis[st] = 1,dis[st] = 0;
    while(q.size()){
        int x = q.front();
        vis[x] = 0;
        is_visit[x] = 1;
        q.pop();
        for(auto && i : a[x]){
            if(dis[i.vi] <= dis[x] + i.wi) continue;
            dis[i.vi] = dis[x] + i.wi;
            if(vis[i.vi]) continue;
            q.push(i.vi);
            vis[i.vi] = 1,cnt[i.vi] ++;
            if(cnt[i.vi] > n) return 1;
        }
    }
    return 0;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %d %d",&n,&m,&s);
    while(m --){
        scanf("%d %d %lld",&u,&v,&w);
        a[u].push_back({v,w});
    }
    for(int i = 1;i <= n;i ++){
        dis[i] = 0x3f3f3f3f3f3f3f3f;
    }
    if(spfa(s)){
        printf("-1\n");
        return 0;
    }
    for(int i = 1;i <= n;i ++){
        if(is_visit[i]) ans[i] = dis[i];
        else ans[i] = 0x3f3f3f3f3f3f3f3f;
    }
    for(int i = 1;i <= n;i ++){
        if(is_visit[i]) continue;
        if(spfa(i)){
            printf("-1\n");
            return 0;
        }
    }
    for(int i = 1;i <= n;i ++){
        if(i == s) printf("0\n");
        else if(ans[i] == 0x3f3f3f3f3f3f3f3f) printf("NoPath\n");
        else printf("%lld\n",ans[i]);
    }

    return 0;
}