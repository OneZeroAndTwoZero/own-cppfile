#include<bits/stdc++.h>
using namespace std;

int n,s,m;
int c[105];
bool ans = 0;
unordered_map<int,int> dp[2];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d %d %d",&n,&s,&m);
    dp[1][s] = 1;
    for(int i = 0;i < n;i ++){
        scanf("%d",&c[i]);
    }
    for(int i = 0;i < n;i ++){
        // cout << i << "[][]\n";
        for(int j = 0;j <= m;j ++){
            dp[i & 1][j] = dp[!(i & 1)][j] | dp[!(i & 1)][j - c[i]] | dp[!(i & 1)][j + c[i]];
        }
    }
    for(int i = m;i >= 0;i --){
        if(dp[n & 1][i]){
            ans = 1;
            printf("%d\n",i);
            break;
        }
    }
    if(!ans){
        printf("-1\n");
    }

	return 0;
}