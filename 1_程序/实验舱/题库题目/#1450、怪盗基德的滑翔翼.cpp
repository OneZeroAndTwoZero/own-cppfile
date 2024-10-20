#include<bits/stdc++.h>
using namespace std;

int k,n,ans;
int a[105];
int dp1[105],dp2[105];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d",&k);
    while(k --){
        ans = 0;
        scanf("%d",&n);
        for(int i = 0;i < n;i ++){
            scanf("%d",&a[i]);
            dp1[i] = dp2[i] = 0;
            for(int j = 0;j < i;j ++){
                if(a[j] > a[i] && dp1[j] > dp1[i]) dp1[i] = dp1[j];
                if(a[j] < a[i] && dp2[j] > dp2[i]) dp2[i] = dp2[j];
            }
            ++ dp1[i],++ dp2[i];
            ans = max({ans,dp1[i],dp2[i]});
        }
        printf("%d\n",ans);
    }

	return 0;
}