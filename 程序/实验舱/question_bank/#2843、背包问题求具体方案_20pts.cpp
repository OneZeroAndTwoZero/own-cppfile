#include<bits/stdc++.h>
using namespace std;

int n,v,now;
int c[1005],w[1005];
int dp[1005][1005];
vector<int> ans;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %d",&n,&v);
    for(int i = n;i > 0;i --){
        scanf("%d %d",&c[i],&w[i]);
    }
    for(int i = 1;i <= n;i ++){
        scanf("%d %d",&c[i],&w[i]);
        for(int j = v;j >= c[i];j --){
            dp[i][j] = max(dp[i - 1][j],dp[i - 1][j - c[i]] + w[i]);
        }
    }
    now = v;
    for(int i = n;i > 0;i --){
        if(dp[i][now] != dp[i - 1][now - c[i]] + w[i]) continue;
        ans.push_back(n - i + 1);
        now -= c[i];
    }
    for(int i = 0;i < ans.size();i ++){
        printf("%d%c",ans[i]," \n"[i == ans.size() - 1]);
    }

    return 0;
}