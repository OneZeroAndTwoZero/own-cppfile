#include<bits/stdc++.h>
using namespace std;

int n;
int ans = 0,w,a[105];
vector<int> g;

void dfs1(int k,int sum){
    if(k == (n >> 1)){
        g.push_back(sum);
        return;
    }
    dfs1(k + 1,sum);
    if(sum <= w - a[k]) dfs1(k + 1,sum + a[k]);
}

void dfs2(int k,int sum){
    if(k == n){
        if(sum > w) return;
        int pos = upper_bound(g.begin(),g.end(),w - sum) - g.begin() - 1;
        ans = max(ans,sum + g[pos]);
        return;
    }
    dfs2(k + 1,sum);
    if(sum <= w - a[k]) dfs2(k + 1,sum + a[k]);
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %d",&w,&n);
    g.push_back(0);
    for(int i = 0;i < n;i ++){
        scanf("%d",&a[i]);
    }
    dfs1(0,0);
    sort(g.begin(),g.end());
    dfs2((n >> 1),0);
    printf("%d\n",ans);

    return 0;
}