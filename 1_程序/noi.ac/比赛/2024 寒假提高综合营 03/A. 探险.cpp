#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

struct snake{
    int xi,yi;
    int curx,cury;
};

struct node{
    int idx,di;
    bool operator < (const node &a) const{
        return di > a.di;
    }
};


int n,q,t;
string a[505];
int cnt[505][505];
int ans[505];
vector<node> e[100005];
int dis[100005];
bool vis[100005];
queue<snake> qa,qb;

void bfs(int st){
    vis[st] = 1,dis[st] = 0;
    deque<int> q;
    q.push_back(st);
    while(q.size()){
        int t = q.front();
        q.pop_front();
        if(t == n * n + n) return;
        for(auto && i : e[t]){
            if(vis[i.idx]) continue;
            vis[i.idx] = 1,dis[i.idx] = dis[t] + i.di;
            if(i.di == 0) q.push_front(i.idx);
            else q.push_back(i.idx);
        }
    }
}

void operate(int t){
    memset(vis,0,sizeof(vis));
    bfs(0);
    ans[t] = dis[n * n + n];
}

void update(){
    while(qa.size()){
        snake t = qa.front();
        qa.pop();
        cnt[t.xi][t.yi] = 1;
        if(t.xi + t.curx <= 0 || t.yi + t.cury <= 0) continue;
        if(t.xi + t.curx > n || t.yi + t.cury > n) continue;
        qb.push({t.xi + t.curx,t.yi + t.cury,t.curx,t.cury});
    }
    swap(qa,qb);
}

void make(){
    for(int i = 1;i <= n;i ++){
        for(int j = 1;j <= n;j ++){
            e[i * n + j].clear();
        }
    }
    e[0].clear();
    e[0].push_back({1 * n + 1,cnt[1][1]});
    for(int i = 1;i <= n;i ++){
        for(int j = 1;j <= n;j ++){
            if(i < n){
                e[i * n + j].push_back({(i + 1) * n + j,cnt[i + 1][j]});
                e[(i + 1) * n + j].push_back({i * n + j,cnt[i][j]});
            }
            if(j < n){
                e[i * n + j].push_back({i * n + j + 1,cnt[i][j + 1]});
                e[i * n + j + 1].push_back({i * n + j,cnt[i][j]});
            }
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

    cin >> n >> q;
    for(int i = 1;i <= n;i ++){
        cin >> a[i];
        a[i] = " " + a[i];
        for(int j = 1;j <= n;j ++){
            if(a[i][j] == '.') continue;
            if(a[i][j] == 'L') qa.push({i,j,0,-1});
            if(a[i][j] == 'R') qa.push({i,j,0,1});
            if(a[i][j] == 'U') qa.push({i,j,-1,0});
            if(a[i][j] == 'D') qa.push({i,j,1,0});
        }
    }
    for(int i = 0;i <= n + 2;i ++){
        make();
        operate(i);
        update();
    }
    while(q --){
        cin >> t;
        cout << ans[min(t,n + 1)] << "\n";
    }

    return 0;
}