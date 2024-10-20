#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

struct node{
    int l,r,m;
    bool operator < (const node &a) const{
        return m < a.m;
    }
};

int n;
bool is_ok5 = 1;
int p[1000006];
int mod = 998244353;
set<vector<int> > s;
bool t[1000005];
node a[1000006];
bool vis[1000006];

void add(){
    vector<int> res;
    int l = 1,maxn = 0,cnt = 0;
    for(int i = 1;i <= n;i ++){
        vis[i] = 0;
        maxn = max(maxn,p[i]);
        if(t[i]){
            a[cnt ++] = {l,i,maxn};
            l = i + 1,maxn = 0,cnt;
        }
    }
    sort(a,a + cnt);
    for(int i = 0;i < cnt / 2;i ++){
        for(int j = a[i].l;j <= a[i].r;j ++){
            vis[j] = 1;
        }
    }
    for(int i = 1;i <= n;i ++){
        if(vis[i]) continue;
        res.push_back(p[i]);
    }
    s.insert(res);
}

void dfs(int k){
    if(k == n){
        add();
        return;
    }
    t[k] = 1;
    dfs(k + 1);
    t[k] = 0;
    dfs(k + 1);
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
        scanf("%d",&p[i]);
        if(p[i] != i) is_ok5 = 0;
    }
    if(is_ok5){
        printf("%d\n",n);
        return 0;
    }
    t[n] = 1;
    dfs(1);
    printf("%d\n",s.size());

    return 0;
}