#include<bits/stdc++.h>
using namespace std;

struct node{
    int ai,bi,ci,di;
};

int n,m,p;
node a[100005];
bool vis[500005];
int ans[500005];

void bfs(){
    vis[p] = 1;
    queue<int> q;
    q.push(p);
    while(q.size()){
        int t = q.front();
        q.pop();
        for(int i = 0;i < m;i ++){
            if(a[i].ai > t || a[i].bi < t) continue;
            for(int j = a[i].ci;j <= a[i].di;j ++){
                if(vis[j]) continue;
                ans[j] = ans[t] + 1;
                q.push(j);
                vis[j] = 1;
            }
        }
    }
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %d %d",&n,&m,&p);
    for(int i = 0;i < m;i ++){
        scanf("%d %d %d %d",&a[i].ai,&a[i].bi,&a[i].ci,&a[i].di);
        a[i + m].ai = a[i].ci;
        a[i + m].bi = a[i].di;
        a[i + m].ci = a[i].ai;
        a[i + m].di = a[i].bi;
    }
    m <<= 1;
    bfs();
    for(int i = 1;i <= n;i ++){
        if(vis[i] == 0) printf("-1\n");
        else printf("%d\n",ans[i]);
    }

    return 0;
}