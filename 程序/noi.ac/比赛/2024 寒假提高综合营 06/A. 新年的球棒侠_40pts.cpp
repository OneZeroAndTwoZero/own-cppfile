#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

int n;
int a[105],b[105];
bool vis[105];
int t[105];
__int128 ans = -0x3f3f3f3f3f3f3f3fLL;

__int128 getabs(__int128 x){
    if(x < 0) x = -x;
    return x;
}

__int128 getnum(){
    __int128 res = 1;
    for(int i = 0;i < n;i ++){
        res = res * a[t[i]] + getabs(res) * b[t[i]];
    }
    return res;
}

void dfs(int k){
    if(k == n){
        ans = max(ans,getnum());
        return;
    }
    for(int i = 0;i < n;i ++){
        if(vis[i]) continue;
        vis[i] = 1;
        t[k] = i;
        dfs(k + 1);
        vis[i] = 0;
    }
}

void putout(__int128 x){
    if(x == 0) return;
    putout(x / 10);
    int t = x % 10;
    printf("%d",t);
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
    for(int i = 0;i < n;i ++){
        scanf("%d %d",&a[i],&b[i]);
    }
    dfs(0);
    if(ans == 0) printf("0\n");
    else{
        if(ans > 0) putout(ans);
        else{
            printf("-");
            putout(-ans);
        }
    }

    return 0;
}