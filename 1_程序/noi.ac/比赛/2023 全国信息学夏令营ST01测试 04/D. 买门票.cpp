#include<bits/stdc++.h>
using namespace std;

int n;
long long m,ans = 0;
long long w[105] = {0};
int d[1000006] = {0};

void dfs(int k,long long sum){
    if(k == n){
        if(sum <= m) ans ++;
        return;
    }
    if(sum > m) return;
    dfs(k + 1,sum);
    dfs(k + 1,sum + w[k]);
}

void dfs2(int k,long long sum){
    if(k == n / 2){
        if(sum <= m) d[sum] ++;
        return;
    }
    if(sum > m) return;
    dfs2(k + 1,sum);
    dfs2(k + 1,sum + w[k]);
}

void dfs3(int k,long long sum){
    if(k == n){
        if(sum <= m){
            ans += d[m - sum];
        }
        return;
    }
    if(sum > m) return;
    dfs3(k + 1,sum);
    dfs3(k + 1,sum + w[k]);
}

int main(){
// #ifndef ONLINE_JUDGE
//     freopen("data.in","r",stdin);
//     freopen("data.out","w",stdout);
// #endif

    scanf("%d %lld",&n,&m);
    for(int i = 0;i < n;i ++){
        scanf("%lld",&w[i]);
    }
    if(n <= 20){
        dfs(0,0);
        printf("%lld\n",ans);
    }else if(m <= 1000005){
        dfs2(0,0);
        d[0] = 1;
        for(int i = 1;i <= 1000005;i ++){
            d[i] = d[i - 1] + d[i];
        }
        dfs3(n / 2,0);
        printf("%lld\n",ans);
    }

	return 0;
}