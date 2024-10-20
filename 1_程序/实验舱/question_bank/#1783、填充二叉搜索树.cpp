#include<bits/stdc++.h>
using namespace std;

int n,pos = 0;
int a[105];
int l[105],r[105],val[105];
int f[105];

void dfs(int u){
    if(u == -1) return;
    dfs(l[u]);
    f[pos ++] = u;
    dfs(r[u]);
}

void bfs(){
    queue<int> q;
    q.push(0);
    while(q.size()){
        int t = q.front();
        q.pop();
        if(t == -1) continue;
        printf("%d ",val[t]);
        q.push(l[t]);
        q.push(r[t]);
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

    scanf("%d",&n);
    for(int i = 0;i < n;i ++){
        scanf("%d %d",&l[i],&r[i]);
    }
    dfs(0);
    for(int i = 0;i < n;i ++){
        scanf("%d",&a[i]);
    }
    sort(a,a + n);
    for(int i = 0;i < n;i ++){
        val[f[i]] = a[i];
    }
    bfs();

    return 0;
}