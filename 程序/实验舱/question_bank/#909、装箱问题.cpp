#include<bits/stdc++.h>
using namespace std;

int v,n;
int a[35],dp[20005];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %d",&v,&n);
    for(int i = 1;i <= v;i ++){
        dp[i] = 0x3f3f3f3f;
    }
    for(int i = 0;i < n;i ++){
        scanf("%d",&a[i]);
        for(int j = v;j >= a[i];j --){
            dp[j] &= dp[j - a[i]];
        }
    }
    for(int i = v;i >= 0;i --){
        if(dp[i] == 0){
            printf("%d\n",v - i);
            break;
        }
    }

	return 0;
}