#include<bits/stdc++.h>
using namespace std;

int n;
int l[10005],r[10005];
long long a[10005],ans[10005];

int dfs(int k){
    if(k == n) return 0;
    if(ans[k]) return ans[k];
    ans[k] = 0x3f3f3f3f3f3f3fLL;
    for(int i = l[k];i <= r[k];i ++){
        ans[k] = min(ans[k],dfs(i) + abs(a[i] - a[k]));
    }
    return ans[k];
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d",&n);
    for(int i = 1;i <= n;i ++){
        scanf("%lld",&a[i]);
    }
    for(int i = 1;i < n;i ++){
        scanf("%d %d",&l[i],&r[i]);
    }
    printf("%lld\n",dfs(1));

	return 0;
}
