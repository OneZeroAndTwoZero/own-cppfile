#include<bits/stdc++.h>
using namespace std;

int T,n;
bool ans;
int t[100005];
bool vis[100005];
bool cnt[100005];

bool check(){
    for(int i = 0;i <= n;i ++){
        cnt[i] = 0;
    }
    long long cur = 1;
    for(int i = 0;i < n;i ++){
        cur *= t[i];
        cur %= n;
        if(cnt[cur]) return 0;
        cnt[cur] = 1;
    }
    return 1;
}

void dfs(int k){
	if(ans) return;
    if(k == n){
        if(check()){
            ans = 1;
        }
        return;
    }
    for(int i = 1;i <= n && !ans;i ++){
        if(vis[i]) continue;
        vis[i] = 1;
        t[k] = i;
        dfs(k + 1);
        vis[i] = 0;
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
    
    scanf("%d",&T);
    while(T --){
        scanf("%d",&n);
        ans = 0;
        for(int i = 0;i <= n;i ++){
            vis[i] = 0;
            t[i] = 0;
        }
        dfs(0);
        if(!ans){
            printf("-1\n");
            continue;
        }
        for(int i = 0;i < n;i ++){
            printf("%d%c",t[i]," \n"[i == n - 1]);
        }
    }

    return 0;
}
