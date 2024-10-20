#include<bits/stdc++.h>
using namespace std;

struct node{
    int idx;
    long long wi;
    bool operator < (const node &a) const{
        return wi > a.wi;
    }
};

int n;
int k[100005];
bool vis[100005];
long long dis[100005];

int lowbit(int x){
    return (x & -x);
}

void dijkstra(){
	priority_queue<node> q;
	q.push({1,0});
	while(q.size()){
		node x = q.top();
		q.pop();
        // cout << x.idx << " " << ";;\n";
		if(vis[x.idx]) continue;
		vis[x.idx] = 1;
        for(int i = 1;i <= n;i ++){
            if(!(k[i] & k[x.idx])) continue;
            // cout << i << "[]\n";
            if(dis[x.idx] + lowbit(k[i] & k[x.idx]) >= dis[i]) continue;
			dis[i] = dis[x.idx] + lowbit(k[i] & k[x.idx]);
			q.push({i,dis[i]});
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

    scanf("%d",&n);
    for(int i = 1;i <= n;i ++){
        scanf("%d",&k[i]);
        dis[i] = 0x3f3f3f3f3f3f3f3fLL;
    }
    dis[1] = 0;
    dijkstra();
    if(!vis[n]) printf("-1\n");
    else printf("%lld\n",dis[n]);

    return 0;
}