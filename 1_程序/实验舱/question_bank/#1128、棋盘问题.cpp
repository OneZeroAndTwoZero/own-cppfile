#include<bits/stdc++.h>
using namespace std;

int n,k,ans;
char a[15][15];
bool vis[15];

void __init(){
    ans = 0;
    for(int i = 0;i <= 13;i ++){
        vis[i] = 0;
    }
}

void dfs(int line,int num){
    if(line == n){
        if(num == k) ans ++;
        return;
    }
    for(int i = 0;i < n;i ++){
        if(vis[i] || a[line][i] == '.') continue;
        vis[i] = 1;
        dfs(line + 1,num + 1);
        vis[i] = 0;
    }
    dfs(line + 1,num);
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    while(1){
        __init();
        scanf("%d %d",&n,&k);
        if(n == -1 && k == -1) return 0;
        for(int i = 0;i < n;i ++){
            scanf("%s",a[i]);
        }
        dfs(0,0);
        printf("%d\n",ans);
    }

	return 0;
}