#include<bits/stdc++.h>
using namespace std;

int n;
int a[10005];
int dp[10005];
int ans[10005];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d",&n);
    for(int i = 1;i <= n;i ++){
        scanf("%d",&a[i]);
        ans[i] = a[i];
        for(int j = 0;j < i;j ++){
            if(dp[j] > dp[i] && a[j] <= a[i]){
                dp[i] = dp[j];
                ans[i] = ans[j] + a[i];
            }
        }
        ++ dp[i];
        printf("%d ",ans[i]);
    }

	return 0;
}