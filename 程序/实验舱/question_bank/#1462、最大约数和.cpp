#include<bits/stdc++.h>
using namespace std;

int s;
int val[3005];
int dp[3005];

void operate(int x){
    val[x] = 1;
    for(int i = 2;i <= x / i;i ++){
        if(x % i) continue;
        val[x] += i;
        if(i * i != x) val[x] += x / i;
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

    scanf("%d",&s);
    for(int i = 2;i <= s;i ++)
        operate(i);
    for(int i = 2;i <= s;i ++){
        for(int j = s;j >= i;j --){
            dp[j] = max(dp[j],dp[j - i] + val[i]);
        }
    }
    printf("%d\n",dp[s]);

	return 0;
}