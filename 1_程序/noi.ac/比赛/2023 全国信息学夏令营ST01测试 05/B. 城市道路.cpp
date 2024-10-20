#include<bits/stdc++.h>
using namespace std;

struct node{
    int id;
    int st;
};

int n,m;
int u,v;
int ans[100005] = {0};
bool vis[100005] = {0};
vector<int> a[100005];

void bfs(){
    queue<node> q;
    q.push({1,0});
    while(q.size()){
        node t = q.front();
        q.pop();
        ans[t.id] = t.st;
        for(auto && i : a[t.id]){
            if(!vis[i]){
                vis[i] = 1;
                q.push({i,t.st + 1});
            }
        }
    }
}

int main(){
// #ifndef ONLINE_JUDGE
//     freopen("data.in","r",stdin);
//     freopen("data.out","w",stdout);
// #endif

    scanf("%d %d",&n,&m);
    for(int i = 0;i < m;i ++){
        scanf("%d %d",&u,&v);
        a[u].push_back(v);
    }
    vis[1] = 1;
    bfs();
    for(int i = 2;i <= n;i ++){
        printf("%d\n",ans[i]);
    }

	return 0;
}