#include<bits/stdc++.h>
using namespace std;

struct node{
    int vi,wi;
};

int n,ans;
int x[6005],y[6005],z[6005];
vector<node> a[6005];
int d[6005];
int dis[6005];

void topsort(){
    queue<int> q;
    for(int i = 1;i <= 6 * n;i ++){
        if(d[i]) continue;
        dis[i] = z[i];
        q.push(i);
    }
    while(q.size()){
        int t = q.front();
        q.pop();
        for(auto && i : a[t]){
            dis[i.vi] = max(dis[i.vi],dis[t] + i.wi);
            d[i.vi] --;
            if(d[i.vi]) continue;
            q.push(i.vi);
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
        scanf("%d %d %d",&x[i],&y[i],&z[i]);
        x[i + n] = y[i],y[i + n] = z[i],z[i + n] = x[i];
        x[i + n * 2] = z[i],y[i + n * 2] = x[i],z[i + n * 2] = y[i];
        x[i + n * 3] = z[i],y[i + n * 3] = y[i],z[i + n * 3] = x[i];
        x[i + n * 4] = y[i],x[i + n * 4] = x[i],x[i + n * 4] = z[i];
        x[i + n * 5] = x[i],x[i + n * 5] = z[i],x[i + n * 5] = y[i];
    }
    for(int i = 1;i <= 6 * n;i ++){
        for(int j = 1;j <= 6 * n;j ++){
            // if((i % n) == (j % n)) continue;
            if(x[i] > x[j] && y[i] > y[j]){
                a[i].push_back({j,z[j]});
                d[j] ++;
            }
        }
    }
    topsort();
    for(int i = 1;i <= 6 * n;i ++){
        ans = max(ans,dis[i]);
    }
    printf("%d\n",ans);

    return 0;
}
