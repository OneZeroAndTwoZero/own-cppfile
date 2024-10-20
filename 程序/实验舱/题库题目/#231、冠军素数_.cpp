#include<bits/stdc++.h>
using namespace std;

vector<long long> ans;
int t;
long long n;

bool su(long long a){
    if(a < 2) return 0;
    for(int i = 2;i <= a / i;i ++){
        if(a % i == 0) return 0;
    }
    return 1;
}

void dfs(long long a){
    if(a >= 1e14) return;
    if(su(a)){
        ans.push_back(a);
    }
    dfs(a * 10 + 4);
    dfs(a * 10 + 7);
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

    dfs(0);
    scanf("%d",&t);
    while(t --){
        scanf("%lld",&n);
        printf("%lld\n",ans[upper_bound(ans.begin(),ans.end(),n) - ans.begin()]);
    }

	return 0;
}
