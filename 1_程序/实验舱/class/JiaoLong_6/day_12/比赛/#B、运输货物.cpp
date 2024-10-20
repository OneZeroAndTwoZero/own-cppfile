#include<bits/stdc++.h>
using namespace std;

struct node{
    int vi,wi;
    bool operator < (const node &a) const{
        return wi < a.wi;
    }
};

int n,m,q,ans;
int x,y,z;
vector<node> a[10005];
int dis[10005];
bool vis[10005];

void dij(int st){
	priority_queue<node> q;
	q.push({st,0});
	while(q.size()){
		node t = q.top();
		q.pop();
        if(t.vi == y){
            ans = t.wi;
            return;
        }
		if(vis[t.vi]) continue;
		vis[t.vi] = 1;
		for(auto && i : a[t.vi]){
			if(min(dis[t.vi],i.wi) <= dis[i.vi]) continue;
			dis[i.vi] = min(dis[t.vi],i.wi);
			q.push({i.vi,dis[i.vi]});
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
        scanf("%d %d %d",&x,&y,&z);
        a[x].push_back({y,z}),a[y].push_back({x,z});
    }
    scanf("%d",&q);
    while(q --){
        scanf("%d %d %d",&x,&y,&z);
        ans = -1;
        for(int i = 1;i <= n;i ++) dis[i] = -1,vis[i] = 0;
        dis[x] = 0x3f3f3f3f;
        dij(x);
        printf("%d\n",ans);
    }

    return 0;
}