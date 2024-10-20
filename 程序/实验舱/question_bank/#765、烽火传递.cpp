#include<bits/stdc++.h>
using namespace std;

int n,m,ans = 0x3f3f3f3f;
int a[200005];
int dp[200005];
deque<int> q;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %d",&n,&m);
    for(int i = 1;i <= n;i ++){
        scanf("%d",&a[i]);
    }
    q.push_back(0);
    for(int i = 1;i <= n;i ++){
        while(q.size() && q.front() < i - m){
            q.pop_front();
        }
        dp[i] = dp[q.front()] + a[i];
        while(q.size() && dp[q.back()] >= dp[i]){
            q.pop_back();
        }
        q.push_back(i);
    }
    for(int i = n - m + 1;i <= n;i ++){
        ans = min(ans,dp[i]);
    }
    printf("%d\n",ans);

    return 0;
}