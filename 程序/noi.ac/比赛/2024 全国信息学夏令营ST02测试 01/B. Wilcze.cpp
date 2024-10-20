#include<bits/stdc++.h>
using namespace std;

struct node{
    long long val, st_idx;
    bool operator < (const node &a) const{
        return val < a.val;
    }
};

int n, d, ans;
long long p, w[2000006], sum[2000006];
priority_queue<node> q;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %lld %d", &n, &p, &d);
    for (int i = 1; i <= n; i ++){
        scanf("%lld", &w[i]);
        sum[i] = w[i] + sum[i - 1];
    }
    int l = 1, r = d;
    ans = d;
    q.push({sum[d], 1});
    for (; l <= n; l ++){
        while (q.size() && q.top().st_idx < l) q.pop();
        while (r <= n && sum[r] - sum[l - 1] - q.top().val <= p){
            r ++;
            q.push({sum[r] - sum[r - d], r - d + 1});
        }
        ans = max(ans, r - l);
    }
    printf("%d\n", ans);

    return 0;
}