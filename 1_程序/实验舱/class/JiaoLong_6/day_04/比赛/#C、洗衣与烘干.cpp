#include<bits/stdc++.h>
using namespace std;

struct node{
    long long ti,wi;
    bool operator < (const node &a) const{
        return ti > a.ti;
    }
};

int l,n,m;
long long ans,w[100005],d[100005];
priority_queue<node> q;
vector<long long> time1,time2;

int main(){
// 正式比赛的时候不要写 ./ ,不要写 ifndef (血的教训)
// #ifndef ONLINE_JUDGE
    freopen("washing.in","r",stdin);
    freopen("washing.out","w",stdout);
// #endif

    scanf("%d %d %d",&l,&n,&m);
    for(int i = 0;i < n;i ++){
        scanf("%lld",&w[i]);
        q.push({w[i],w[i]});
    }
    for(int i = 0;i < l;i ++){
        // cout << q.top().ti << " " << q.top().wi << "[]\n";
        time1.push_back(q.top().ti);
        q.push({q.top().ti + q.top().wi,q.top().wi});
        q.pop();
    }
    while(q.size()) q.pop();
    for(int i = 0;i < m;i ++){
        scanf("%lld",&d[i]);
        q.push({d[i],d[i]});
    }
    for(int i = 0;i < l;i ++){
        // cout << q.top().ti << " " << q.top().wi << "[]\n";
        time2.push_back(q.top().ti);
        q.push({q.top().ti + q.top().wi,q.top().wi});
        q.pop();
    }
    for(int i = 0;i < time1.size();i ++){
        ans = max(ans,time1[i] + time2[l - i - 1]);
    }
    printf("%lld\n",ans);

	return 0;
}