#include<bits/stdc++.h>
using namespace std;

int n,w,ans = 114514;
int a[25];
int now[25];

void dfs(int k,int num){
    if(k == n){
        ans = min(ans,num);
        return;
    }
    if(num >= ans) return;
    for(int i = 0;i < num;i ++){
        if(now[i] + a[k] <= w){
            now[i] += a[k];
            dfs(k + 1,num);
            now[i] -= a[k];
        }
    }
    now[num] = a[k];
    dfs(k + 1,num + 1);
    now[num] = 0;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d %d",&n,&w);
    for(int i = 0;i < n;i ++)
        scanf("%d",&a[i]);
    dfs(0,0);
    printf("%d\n",ans);

	return 0;
}