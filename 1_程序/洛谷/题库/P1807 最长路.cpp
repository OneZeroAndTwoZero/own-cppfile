#include<bits/stdc++.h>
using namespace std;

struct node{
    int to,data,next;
};

node e[400005];
int l[200005] = {0};
int n,m,cnt = 0;
int u,v,w;
int ans[20005] = {0};
int d[200005] = {0};

void add(int u,int v,int w){
    e[++ cnt].data = w;
    e[cnt].to = v;
    e[cnt].next = l[u];
    l[u] = cnt;
}

void cz(){
    queue<int> q;
    for(int i = 1;i <= n;i ++){
        if(!d[i]) q.push(i);
    }
    while(q.size()){
        int t = q.front();
        q.pop();
        for(int i = l[t];i > 0;i = e[i].next){
            if(ans[t] != -0x3f3f3f3f){
                ans[e[i].to] = max(ans[e[i].to],ans[t] + e[i].data);
            }
            d[e[i].to] --;
            if(!d[e[i].to]) q.push(e[i].to);
        }
    }
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

    scanf("%d %d",&n,&m);
    for(int i = 0;i < m;i ++){
        scanf("%d %d %d",&u,&v,&w);
        add(u,v,w);
    }
    for(int i = 0;i <= n;i ++){
        ans[i] = -0x3f3f3f3f;
    }
    ans[1] = 0;
    cz();
    if(ans[n] != -0x3f3f3f3f) printf("%d\n",ans[n]);
    else printf("-1\n");

	return 0;
}
