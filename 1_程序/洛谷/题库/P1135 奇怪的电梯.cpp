#include<bits/stdc++.h>
using namespace std;

struct node{
    int id,st;
};

int n,s,b;
int a[1005] = {0};
int ans[1005] = {0};
bool vis[1005] = {0};

void bfs(){
    queue<node> q;
    q.push({s,0});
    while(q.size()){
        node p = q.front();
        q.pop();
        ans[p.id] = p.st;
        if(p.id + a[p.id] <= n && !vis[p.id + a[p.id]]){
            vis[p.id + a[p.id]] = 1;
            q.push({p.id + a[p.id],p.st + 1});
        }
        if(p.id - a[p.id] > 0 && !vis[p.id - a[p.id]]){
            vis[p.id - a[p.id]] = 1;
            q.push({p.id - a[p.id],p.st + 1});
        }
    }
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d %d %d",&n,&s,&b);
    for(int i = 1;i <= n;i ++){
        scanf("%d",&a[i]);
        ans[i] = -1;
    }
    vis[s] = 1;
    bfs();
    printf("%d\n",ans[b]);

	return 0;
}
