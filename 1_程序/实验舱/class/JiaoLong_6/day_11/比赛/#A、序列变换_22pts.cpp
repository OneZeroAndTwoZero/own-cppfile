#include<bits/stdc++.h>
using namespace std;

int n;
bool vis[10005];
int a[10005],t[10005];

void dfs(int k){
    // cout << k << ";;\n";
    if(k == n){
        for(int i = 0;i < n;i ++){
            printf("%d%c",t[i]," \n"[i == n - 1]);
        }
        exit(0);
    }
    for(int i = 0;i < n;i ++){
        if(vis[i]) continue;
        if(min(abs(k - i),n - abs(k - i)) != a[k]) continue;
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

    scanf("%d",&n);
    for(int i = 0;i < n;i ++){
        scanf("%d",&a[i]);
    }
    dfs(0);
    printf("No Answer\n");

    return 0;
}