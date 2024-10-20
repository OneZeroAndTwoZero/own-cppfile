#include<bits/stdc++.h>
using namespace std;

struct node{
    int li,ri;
    int wi;
    bool operator < (const node &a) const{
        return ri < a.ri;
    }
};

int n;
int l,r,v;
int dp[200005] = {0};
node a[200005] = {0};

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

    scanf("%d",&n);
    for(int i = 0;i < n;i ++){
        scanf("%d %d %d",&l,&r,&v);
        a[i].li = l,a[i].ri = r,a[i].wi = v;
    }
    sort(a,a + n);
    dp[0] = a[0].wi;
    for(int i = 1;i < n;i ++){
        dp[i] = a[i].wi;
        for(int j = 0;j < i;j ++){
            int res = dp[j];
            if(a[i].li > a[j].ri)
                res += a[i].wi;
            dp[i] = max(dp[i],res);
        }
    }
    printf("%d\n",dp[n - 1]);

	return 0;
}