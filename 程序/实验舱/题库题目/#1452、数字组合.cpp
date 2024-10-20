#include<bits/stdc++.h>
using namespace std;

int n,t,ans = 0;
int a[105] = {0};

void dfs(int k,int sum){
    if(k == n){
        if(sum == t) ans ++;
        return;
    }
    if(sum > t) return;
    dfs(k + 1,sum);
    dfs(k + 1,sum + a[k]);
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

    scanf("%d %d",&n,&t);
    for(int i = 0;i < n;i ++){
        scanf("%d",&a[i]);
    }
    dfs(0,0);
    printf("%d\n",ans);

	return 0;
}
