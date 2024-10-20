#include<bits/stdc++.h>
using namespace std;

int n,m,w,d;
int dp[20005];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %d",&n,&m);
    for(int i = 0;i < n;i ++){
        scanf("%d %d",&w,&d);
        for(int j = m;j >= w;j --){
            dp[j] = max(dp[j],dp[j - w] + d);
        }
    }
    printf("%d\n",dp[m]);

	return 0;
}