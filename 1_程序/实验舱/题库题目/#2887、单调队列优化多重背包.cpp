#include<bits/stdc++.h>
using namespace std;

int n,m;
int w[1005],v[1005],k[1005];
int dp[30005] = {0};

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

    scanf("%d %d",&n,&m);
    for(int i = 0;i < n;i ++){
        scanf("%d %d %d",&w[i],&v[i],&k[i]);
    }
    for(int i = 0;i < n;i ++){
        deque<int> q1,q2;
        for(int rem = 0;rem < v[i];rem ++){
            for(int j = 0;j * v[i] + rem <= m;j ++){
                int tem = dp[j * v[i] + rem];
                while(q1.size() && q1.back() <= tem)
                    q1.pop_back(),q2.pop_back();
                q1.push_back(tem);
                q2.push_back(j * v[i] + rem);
                while(q2.size() && q2.front() + k[i] < j * v[i] + rem)
                    q1.pop_front(),q2.pop_front();
                dp[j * v[i] + rem] = max(dp[j * v[i] + rem],q1.front());
            }
        }
    }
    printf("%d\n",dp[m]);

	return 0;
}