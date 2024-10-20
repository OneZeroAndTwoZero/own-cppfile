#include<bits/stdc++.h>
using namespace std;

int n;
int a[100005];
int dp1[100005][2],dp2[100005][2];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d",&n);
    for(int i = 1;i <= n;i ++)
        scanf("%d",&a[i]);
    if(n == 1){
        printf("%d\n",a[1]);
        return 0;
    }
    for(int i = 2;i <= n;i ++){
        dp1[i][0] = max(dp1[i - 1][0],dp1[i - 1][1]);
        dp1[i][1] = dp1[i - 1][0] + a[i];
    }
    for(int i = 1;i < n;i ++){
        dp2[i][0] = max(dp2[i - 1][0],dp2[i - 1][1]);
        dp2[i][1] = dp2[i - 1][0] + a[i];
    }
    printf("%d\n",max({dp1[n][0],dp1[n][1],dp2[n - 1][0],dp2[n - 1][1]}));

	return 0;
}