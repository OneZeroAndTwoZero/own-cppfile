#include<bits/stdc++.h>
using namespace std;

int n,k,ans = 0;

void dfs(int p,int sum,int l){
    if(p == k){
        if(sum == n){
            ans ++;
        }
        return;
    }
    for(int i = l;sum + i <= n;i ++){
        dfs(p + 1,sum + i,i);
    }
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

    scanf("%d %d",&n,&k);
    dfs(0,0,1);
    printf("%d\n",ans);

	return 0;
}