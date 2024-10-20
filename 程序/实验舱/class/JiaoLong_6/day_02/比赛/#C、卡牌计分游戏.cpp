#include<bits/stdc++.h>
using namespace std;

int n;
long long a[105];
long long ans;

int check(long long x){
    int res = 0;
    while(x){
        res += (x % 10) == 4;
        x /= 10;
    }
    return res;
}

void dfs(int r,long long sum){
    if(r == n){
        ans += check(sum);
        return;
    }
    dfs(r + 1,sum);
    dfs(r + 1,sum + a[r]);
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d",&n);
    for(int i = 0;i < n;i ++){
        scanf("%lld",&a[i]);
    }
    dfs(0,0);
    printf("%lld\n",ans);

	return 0;
}