#include<bits/stdc++.h>
#define __len(x) (((1LL << (int)(3.3 * x + 1)) + 15))
using namespace std;

struct node{
    int val1,val2,val3;
};

int n,cntN = 0,cntE = 0;
char dir;
int curx[__len(5)],cury[__len(5)];
int x[__len(5)],y[__len(5)];
vector<int> a[__len(5)];
int d[__len(5)];
vector<node> cow;
node vis[4 * __len(3)][4 * __len(3)];
int ans[__len(5)];

void topsort(){
    queue<int> q;
    for(int i = 0;i < n;i ++){
        if(!d[i]) q.push(i);
    }
    while(q.size()){
        int t = q.front();
        q.pop();
        for(auto && i : a[t]){
            // cout << t << "[][][][][]" << i << "\n";
            // cout << ans[i] << " " << ans[t] << "\n";
            d[i] --;
            ans[i] += (ans[t] + 1);
            if(!d[i]) q.push(i);
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

    cin >> n;
    for(int i = 0;i < n;i ++){
        cin >> dir >> x[i] >> y[i];
        if(dir == 'N') cury[i] = 1,cntN ++;
        if(dir == 'E') curx[i] = 1,cntE ++;
        cow.push_back({x[i],y[i]});
    }
    int cntnum = 1;
    while(1){
        for(int i = 0;i < n;i ++){
            if(cow[i].val3) continue;
            cow[i].val1 += curx[i];
            cow[i].val2 += cury[i];
            int tem = vis[cow[i].val1][cow[i].val2].val1;
            if(tem && tem < cntnum){
                a[i].push_back(vis[cow[i].val1][cow[i].val2].val2);
                d[vis[cow[i].val1][cow[i].val2].val2] ++;
                cow[i].val3 = 1;
            }else{
                vis[cow[i].val1][cow[i].val2].val1 = cntnum;
                vis[cow[i].val1][cow[i].val2].val2 = i;
            }
        }
        if(cntnum > 2005) break;
        cntnum ++;
    }
    topsort();
    for(int i = 0;i < n;i ++){
        cout << ans[i] << "\n";
    }

    return 0;
}