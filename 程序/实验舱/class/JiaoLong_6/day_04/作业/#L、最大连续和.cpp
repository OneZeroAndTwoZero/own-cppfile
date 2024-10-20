#include<bits/stdc++.h>
using namespace std;

int n,m,ans = -0x3f3f3f3f;
int sum[200005];
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
        scanf("%d",&sum[i]);
        ans = max(ans,sum[i]);
        sum[i] += sum[i - 1];
    }
    q.push_back(0);
    for(int i = 1;i <= n;i ++){
        while(q.size() && q.front() < i - m){
            q.pop_front();
        }
        while(q.size() && sum[q.back()] >= sum[i]){
            q.pop_back();
        }
        if(q.size()) ans = max(ans,sum[i] - sum[q.front()]);
        q.push_back(i);
    }
    printf("%d\n",ans);

	return 0;
}