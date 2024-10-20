#include<bits/stdc++.h>
using namespace std;

int n;
char s[1000006];
int mod = 1000000007,dp[3];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%s",s);
    n = strlen(s);
    for(int i = 0;i < n;i ++){
        if(s[i] == 'S'){
            dp[0] = (dp[0] + 1) % mod;
        }else if(s[i] == 'Y'){
            dp[1] = (dp[1] + dp[0]) % mod;
        }else if(s[i] == 'C'){
            dp[2] = (dp[2] + dp[1]) % mod;
        }
    }
    printf("%d\n",dp[2]);

    return 0;
}