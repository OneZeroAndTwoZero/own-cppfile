#include<bits/stdc++.h>
using namespace std;

int n,m,u,v;
bool vis[100005];
vector<int> a[100005];
set<int> s;

void bfs(){
    vis[1] = 1;
    s.insert(1);
    while(s.size()){
        int t = *s.begin();
        s.erase(s.begin());
        printf("%d ",t);
        for(auto && i : a[t]){
            if(vis[i]) continue;
            vis[i] = 1;
            s.insert(i);
        }
    }
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d %d",&n,&m);
    while(m --){
        scanf("%d %d",&u,&v);
        a[u].push_back(v);
        a[v].push_back(u);
    }
    bfs();
    printf("\n");

	return 0;
}