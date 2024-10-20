#include<bits/stdc++.h>
using namespace std;

struct node{
    int vi,wi;
};

int n,m;
int x,y,z;
vector<node> a[200005];
int ans[200005];
bool vis[200005];

void bfs(){
    deque<int> q;
    q.push_back(1);
    vis[1] = 1,ans[1] = 0;
    while(q.size()){
        int t = q.front();
        q.pop_front();
        // 由于第一次被遍历到时答案不一定正确,所以在第一次拿出时标记
        // 类似于dij,但是deque直接维护单调性
        vis[t] = 1;
        for(auto && i : a[t]){
            if(vis[i.vi]) continue;
            if(i.wi == 0){
                q.push_front(i.vi);
                ans[i.vi] = min(ans[i.vi],ans[t]);
            }else{
                q.push_back(i.vi);
                ans[i.vi] = min(ans[i.vi],ans[t] + 1);
            }
        }
    }
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d %d",&n,&m);
    for(int i = 0;i < m;i ++){
        scanf("%d %d %d",&x,&y,&z);
        a[x].push_back({y,z});
        a[y].push_back({x,z});
    }
    memset(ans,0x3f,sizeof(ans));
    bfs();
    if(vis[n]) printf("%d\n",ans[n]);
    else printf("-1\n");

	return 0;
}