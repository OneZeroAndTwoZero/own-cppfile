#include<bits/stdc++.h>
using namespace std;

struct edge{
    int ui,vi,nxt;
};

int n,m,pos = 1,cur = 1,cntdcc;
int u,v;
int head[200005];
int dfn[200005],low[200005];
bool is_cutting[200005];
edge e[1000005];
vector<int> v_dcc[200005];
stack<int> s;

void addedge(int u,int v){
    pos ++;
    e[pos] = {u,v,head[u]};
    head[u] = pos;
}

void tarjan(int u,int root){
    low[u] = dfn[u] = cur ++;
    s.push(u);
    // use "u == root && head[u] == 0" to check 
    // whether it is a lonely point
    if(u == root && head[u] == 0){
        cntdcc ++;
        v_dcc[cntdcc].push_back(u);
        return;
    }
    for(int i = head[u];i != 0;i = e[i].nxt){
        int v = e[i].vi;
        if(!dfn[v]){
            tarjan(v,root);
            low[u] = min(low[u],low[v]);
            if(low[v] >= dfn[u]){
                cntdcc ++;
                while(s.top() != v){
                    v_dcc[cntdcc].push_back(s.top());
                    s.pop();
                }
                v_dcc[cntdcc].push_back(s.top());
                v_dcc[cntdcc].push_back(u);
                s.pop();
            }
        }else{
            low[u] = min(low[u],dfn[v]);
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

    scanf("%d %d",&n,&m);
    while(m --){
        scanf("%d %d",&u,&v);
        addedge(u,v);
        addedge(v,u);
    }
    for(int i = 1;i <= n;i ++){
        if(dfn[i]) continue;
        tarjan(i,i);
    }
    for(int i = 1;i <= cntdcc;i ++){
        for(auto && k : v_dcc[i]){
            printf("%d ",k);
        }
        printf("\n");
    }

    return 0;
}