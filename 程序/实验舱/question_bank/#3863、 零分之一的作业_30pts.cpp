#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

int n,m,ans = -1;
long long tem,sum = 0;
long long b[1000006];
bool t[1000006];

int check(){
    int res = 0,cnt = 0;
    t[n] = 1;
    for(int i = 0;i <= n;i ++){
        if(t[i]){
            res = max(res,cnt);
            cnt = 0;
        }else{
            cnt ++;
        }
    }
    return res;
}

void dfs(int k,long long cnt){
    if(k == n){
        if(cnt < sum) return;
        ans = max(ans,check());
        return;
    }
    t[k] = 1;
    dfs(k + 1,cnt + b[k]);
    t[k] = 0;
    dfs(k + 1,cnt);
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %d",&n,&m);
    for(int i = 0;i < m;i ++){
        scanf("%lld",&tem);
        sum += tem;
    }
    for(int i = 0;i < n;i ++){
        scanf("%lld",&b[i]);
    }
    dfs(0,0);
    if(ans != -1) printf("%d\n",ans);
    else printf("what a bad day!\n");

    return 0;
}