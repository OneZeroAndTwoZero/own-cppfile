#include<bits/stdc++.h>
using namespace std;

struct node{
    int val,id;
};

int n,m,k,ans = 0x3f3f3f3f;
int a[1005][1005],maxn[1005][1005],minn[1005][1005];

void operate1(int x){
    deque<node> q1,q2;
    for(int i = 1;i <= m;i ++){
        int t = a[x][i];
        while(q1.size() && q1.front().id <= i - k){
            q1.pop_front();
        }
        while(q2.size() && q2.front().id <= i - k){
            q2.pop_front();
        }
        while(q1.size() && q1.back().val <= t){
            q1.pop_back();
        }
        while(q2.size() && q2.back().val >= t){
            q2.pop_back();
        }
        q1.push_back({t,i});
        q2.push_back({t,i});
        maxn[x][i] = q1.front().val,minn[x][i] = q2.front().val;
    }
}

void operate2(int x){
    deque<node> q1,q2;
    for(int i = 1;i <= n;i ++){
        int t = maxn[i][x];
        while(q1.size() && q1.front().id <= i - k){
            q1.pop_front();
        }
        while(q1.size() && q1.back().val <= t){
            q1.pop_back();
        }
        q1.push_back({t,i});
        maxn[i][x] = q1.front().val;
        t = minn[i][x];
        while(q2.size() && q2.front().id <= i - k){
            q2.pop_front();
        }
        while(q2.size() && q2.back().val >= t){
            q2.pop_back();
        }
        q2.push_back({t,i});
        minn[i][x] = q2.front().val;
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

    scanf("%d %d %d",&n,&m,&k);
    for(int i = 1;i <= n;i ++){
        for(int j = 1;j <= m;j ++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i = 1;i <= n;i ++){
        operate1(i);
    }
    for(int i = 1;i <= m;i ++){
        operate2(i);
    }
    for(int i = k;i <= n;i ++){
        for(int j = k;j <= m;j ++){
            ans = min(ans,maxn[i][j] - minn[i][j]);
        }
    }
    printf("%d\n",ans);

    return 0;
}