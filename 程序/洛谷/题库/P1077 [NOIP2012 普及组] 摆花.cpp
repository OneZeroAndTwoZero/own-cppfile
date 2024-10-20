#include <bits/stdc++.h>
using namespace std;

int n,m,ans = 0,mod = 1e6 + 7;
int a[1005] = {0};

void dfs(int u,int sum){
    //cout << u << ";;" << sum << endl;
    if(u == n){
        if(sum == m){
            ans ++;
            ans %= mod;
        }
        return;
    }
    for(int i = 0;i <= a[u] && i + sum <= m;i ++){
        dfs(u + 1,sum + i);
    }
}

int main(){
    scanf("%d %d",&n,&m);
    for(int i = 0;i < n;i ++){
        scanf("%d",&a[i]);
    }
    dfs(0,0);
    printf("%d\n",ans);
}